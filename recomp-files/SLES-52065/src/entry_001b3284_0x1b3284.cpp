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

// Function: entry_001b3284
// Address: 0x1b3284 - 0x1b32e4
void entry_001b3284_0x1b3284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3284_0x1b3284");
#endif

    switch (ctx->pc) {
        case 0x1b32c4u: goto label_1b32c4;
        case 0x1b32ccu: goto label_1b32cc;
        default: break;
    }

    ctx->pc = 0x1b3284u;

    // 0x1b3284: 0x0  nop
    ctx->pc = 0x1b3284u;
    // NOP
    // 0x1b3288: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b3288u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b328c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x1b328cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x1b3290: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b3290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1b3294: 0x24632d20  addiu       $v1, $v1, 0x2D20
    ctx->pc = 0x1b3294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11552));
    // 0x1b3298: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b329c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1b329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b32a0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1b32a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b32a4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1b32a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b32a8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b32a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b32ac: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1b32acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1b32b0: 0x0  nop
    ctx->pc = 0x1b32b0u;
    // NOP
    // 0x1b32b4: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x1b32b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1b32b8: 0x46011b42  mul.s       $f13, $f3, $f1
    ctx->pc = 0x1b32b8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1b32bc: 0xc062860  jal         func_18A180
    ctx->pc = 0x1B32BCu;
    SET_GPR_U32(ctx, 31, 0x1B32C4u);
    ctx->pc = 0x1B32C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32BCu;
    // 0x1b32c0: 0x46001b82  mul.s       $f14, $f3, $f0 (Delay Slot)
    ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A180u, 0x1B32BCu, 0x1B32C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32C4u;
label_1b32c4:
    // 0x1b32c4: 0xc062114  jal         func_188450
    ctx->pc = 0x1B32C4u;
    SET_GPR_U32(ctx, 31, 0x1B32CCu);
    ctx->pc = 0x1B32C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B32C4u;
    // 0x1b32c8: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188450u, 0x1B32C4u, 0x1B32CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B32CCu;
label_1b32cc:
    // 0x1b32cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1b32ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b32d0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1b32d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1b32d4: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B32D4u;
    {
        const bool branch_taken_0x1b32d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b32d4) {
            ctx->pc = 0x1B32E4u;
            return;
        }
    }
    ctx->pc = 0x1B32DCu;
    // 0x1b32dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B32DCu;
    {
        const bool branch_taken_0x1b32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B32E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B32DCu;
        // 0x1b32e0: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b32dc) {
            ctx->pc = 0x1B32E8u;
            return;
        }
    }
    ctx->pc = 0x1B32E4u;
}
