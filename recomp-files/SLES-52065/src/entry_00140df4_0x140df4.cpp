#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00140df4
// Address: 0x140df4 - 0x140e3c
void entry_00140df4_0x140df4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140df4_0x140df4");
#endif

    ctx->pc = 0x140df4u;

    // 0x140df4: 0x16600027  bnez        $s3, . + 4 + (0x27 << 2)
    ctx->pc = 0x140DF4u;
    {
        const bool branch_taken_0x140df4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x140df4) {
            ctx->pc = 0x140E94u;
            return;
        }
    }
    ctx->pc = 0x140DFCu;
    // 0x140dfc: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x140dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x140e00: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x140e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x140e04: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x140e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x140e08: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x140e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x140e0c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x140e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140e10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x140e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140e14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x140e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x140e18: 0xafb200b0  sw          $s2, 0xB0($sp)
    ctx->pc = 0x140e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 18));
    // 0x140e1c: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x140e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x140e20: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x140e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
    // 0x140e24: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x140e24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x140e28: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x140e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x140e2c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x140e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x140e30: 0x1220016c  beqz        $s1, . + 4 + (0x16C << 2)
    ctx->pc = 0x140E30u;
    {
        const bool branch_taken_0x140e30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x140E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140E30u;
        // 0x140e34: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x140e30) {
            ctx->pc = 0x1413E4u;
            return;
        }
    }
    ctx->pc = 0x140E38u;
    // 0x140e38: 0x27a60158  addiu       $a2, $sp, 0x158
    ctx->pc = 0x140e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    ctx->pc = 0x140e3cu;
}
