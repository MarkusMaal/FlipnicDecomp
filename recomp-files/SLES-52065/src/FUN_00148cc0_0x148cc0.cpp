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

// Function: FUN_00148cc0
// Address: 0x148cc0 - 0x148d00
void FUN_00148cc0_0x148cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00148cc0_0x148cc0");
#endif

    ctx->pc = 0x148cc0u;

    // 0x148cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x148cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148cc4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x148CC4u;
    {
        const bool branch_taken_0x148cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x148cc4) {
            ctx->pc = 0x148CF0u;
            goto label_148cf0;
        }
    }
    ctx->pc = 0x148CCCu;
    // 0x148ccc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148CCCu;
    {
        const bool branch_taken_0x148ccc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x148ccc) {
            ctx->pc = 0x148CDCu;
            goto label_148cdc;
        }
    }
    ctx->pc = 0x148CD4u;
    // 0x148cd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x148CD4u;
    {
        const bool branch_taken_0x148cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148cd4) {
            ctx->pc = 0x148CF8u;
            goto label_148cf8;
        }
    }
    ctx->pc = 0x148CDCu;
label_148cdc:
    // 0x148cdc: 0xe48c0140  swc1        $f12, 0x140($a0)
    ctx->pc = 0x148cdcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x148ce0: 0xe48c0144  swc1        $f12, 0x144($a0)
    ctx->pc = 0x148ce0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x148ce4: 0xe48c01f0  swc1        $f12, 0x1F0($a0)
    ctx->pc = 0x148ce4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 496), bits); }
    // 0x148ce8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148CE8u;
    {
        const bool branch_taken_0x148ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148CE8u;
        // 0x148cec: 0xe48c01f4  swc1        $f12, 0x1F4($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 500), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x148ce8) {
            ctx->pc = 0x148CF8u;
            goto label_148cf8;
        }
    }
    ctx->pc = 0x148CF0u;
label_148cf0:
    // 0x148cf0: 0xe48c02a0  swc1        $f12, 0x2A0($a0)
    ctx->pc = 0x148cf0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 672), bits); }
    // 0x148cf4: 0xe48c02a4  swc1        $f12, 0x2A4($a0)
    ctx->pc = 0x148cf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 676), bits); }
label_148cf8:
    // 0x148cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x148CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148D00u;
}
