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

// Function: entry_00132000
// Address: 0x132000 - 0x132050
void entry_00132000_0x132000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132000_0x132000");
#endif

    switch (ctx->pc) {
        case 0x13200cu: goto label_13200c;
        case 0x132018u: goto label_132018;
        case 0x132028u: goto label_132028;
        case 0x132034u: goto label_132034;
        default: break;
    }

    ctx->pc = 0x132000u;

    // 0x132000: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x132000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x132004: 0xc04c7b8  jal         func_131EE0
    ctx->pc = 0x132004u;
    SET_GPR_U32(ctx, 31, 0x13200Cu);
    ctx->pc = 0x132008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132004u;
    // 0x132008: 0x26250058  addiu       $a1, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EE0u, 0x132004u, 0x13200Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13200Cu;
label_13200c:
    // 0x13200c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x132010: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x132010u;
    SET_GPR_U32(ctx, 31, 0x132018u);
    ctx->pc = 0x132014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132010u;
    // 0x132014: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x132010u, 0x132018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132018u;
label_132018:
    // 0x132018: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x132018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x13201c: 0x8fb10048  lw          $s1, 0x48($sp)
    ctx->pc = 0x13201cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x132020: 0xc04c7b0  jal         func_131EC0
    ctx->pc = 0x132020u;
    SET_GPR_U32(ctx, 31, 0x132028u);
    ctx->pc = 0x132024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132020u;
    // 0x132024: 0x27a4005c  addiu       $a0, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131EC0u, 0x132020u, 0x132028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132028u;
label_132028:
    // 0x132028: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x132028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x13202c: 0xc04c7b4  jal         func_131ED0
    ctx->pc = 0x13202Cu;
    SET_GPR_U32(ctx, 31, 0x132034u);
    ctx->pc = 0x132030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13202Cu;
    // 0x132030: 0x27a5005c  addiu       $a1, $sp, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED0u, 0x13202Cu, 0x132034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132034u;
label_132034:
    // 0x132034: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x132034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x132038: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x132038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13203c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13203cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132040: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x132040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x132044: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x132048: 0x1071000a  beq         $v1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x132048u;
    {
        const bool branch_taken_0x132048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x132048) {
            ctx->pc = 0x132074u;
            return;
        }
    }
    ctx->pc = 0x132050u;
}
