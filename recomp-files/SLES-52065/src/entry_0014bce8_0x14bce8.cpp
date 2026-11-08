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

// Function: entry_0014bce8
// Address: 0x14bce8 - 0x14bd44
void entry_0014bce8_0x14bce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014bce8_0x14bce8");
#endif

    ctx->pc = 0x14bce8u;

    // 0x14bce8: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x14bce8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14bcec: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x14bcecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14bcf0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x14bcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14bcf4: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x14bcf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x14bcf8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x14bcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14bcfc: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x14bcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x14bd00: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x14bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x14bd04: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x14bd04u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x14bd08: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x14bd08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x14bd0c: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x14bd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
    // 0x14bd10: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x14bd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
    // 0x14bd14: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x14bd14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x14bd18: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x14bd18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14bd1c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x14bd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd20: 0xfd070000  sd          $a3, 0x0($t0)
    ctx->pc = 0x14bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 7));
    // 0x14bd24: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x14bd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x14bd28: 0xc5620000  lwc1        $f2, 0x0($t3)
    ctx->pc = 0x14bd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14bd2c: 0xc5610004  lwc1        $f1, 0x4($t3)
    ctx->pc = 0x14bd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14bd30: 0xc5600008  lwc1        $f0, 0x8($t3)
    ctx->pc = 0x14bd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bd34: 0xe4c20000  swc1        $f2, 0x0($a2)
    ctx->pc = 0x14bd34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x14bd38: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x14bd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x14bd3c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x14BD3Cu;
    {
        const bool branch_taken_0x14bd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BD3Cu;
        // 0x14bd40: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bd3c) {
            ctx->pc = 0x14BD8Cu;
            return;
        }
    }
    ctx->pc = 0x14BD44u;
}
