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

// Function: entry_00165704
// Address: 0x165704 - 0x165748
void entry_00165704_0x165704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165704_0x165704");
#endif

    ctx->pc = 0x165704u;

    // 0x165704: 0x0  nop
    ctx->pc = 0x165704u;
    // NOP
    // 0x165708: 0x441000f  bgez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x165708u;
    {
        const bool branch_taken_0x165708 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x165708) {
            ctx->pc = 0x165748u;
            return;
        }
    }
    ctx->pc = 0x165710u;
    // 0x165710: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x165714: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x165718: 0x1090000b  beq         $a0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x165718u;
    {
        const bool branch_taken_0x165718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x16571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165718u;
        // 0x16571c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165718) {
            ctx->pc = 0x165748u;
            return;
        }
    }
    ctx->pc = 0x165720u;
    // 0x165720: 0x2681021  addu        $v0, $s3, $t0
    ctx->pc = 0x165720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x165724: 0x2465821  addu        $t3, $s2, $a2
    ctx->pc = 0x165724u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x165728: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x165728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16572c: 0x2486021  addu        $t4, $s2, $t0
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x165730: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x165730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x165734: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x165734u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x165738: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x16573c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x16573cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x165740: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x165740u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x165744: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x165744u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x165748u;
}
