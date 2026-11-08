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

// Function: entry_0018203c
// Address: 0x18203c - 0x1820bc
void entry_0018203c_0x18203c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018203c_0x18203c");
#endif

    switch (ctx->pc) {
        case 0x182048u: goto label_182048;
        case 0x182054u: goto label_182054;
        case 0x182094u: goto label_182094;
        default: break;
    }

    ctx->pc = 0x18203cu;

    // 0x18203c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18203cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182040: 0xc080702  jal         func_201C08
    ctx->pc = 0x182040u;
    SET_GPR_U32(ctx, 31, 0x182048u);
    ctx->pc = 0x182044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x182040u;
    // 0x182044: 0xaf918660  sw          $s1, -0x79A0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936160), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x182040u, 0x182048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182048u;
label_182048:
    // 0x182048: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x182048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x18204c: 0xc080702  jal         func_201C08
    ctx->pc = 0x18204Cu;
    SET_GPR_U32(ctx, 31, 0x182054u);
    ctx->pc = 0x182050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18204Cu;
    // 0x182050: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C08u, 0x18204Cu, 0x182054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182054u;
label_182054:
    // 0x182054: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x182054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x182058: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x182058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
    // 0x18205c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x18205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x182060: 0xae220044  sw          $v0, 0x44($s1)
    ctx->pc = 0x182060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
    // 0x182064: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x182064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x182068: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x182068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x18206c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x18206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x182070: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x182070u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
    // 0x182074: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x182074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x182078: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x182078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
    // 0x18207c: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x18207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x182080: 0xac530060  sw          $s3, 0x60($v0)
    ctx->pc = 0x182080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 19));
    // 0x182084: 0x8f828660  lw          $v0, -0x79A0($gp)
    ctx->pc = 0x182084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x182088: 0xac520064  sw          $s2, 0x64($v0)
    ctx->pc = 0x182088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 18));
    // 0x18208c: 0xc060064  jal         func_180190
    ctx->pc = 0x18208Cu;
    SET_GPR_U32(ctx, 31, 0x182094u);
    ctx->pc = 0x182090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18208Cu;
    // 0x182090: 0x8f848660  lw          $a0, -0x79A0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180190u, 0x18208Cu, 0x182094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182094u;
label_182094:
    // 0x182094: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x182094u;
    {
        const bool branch_taken_0x182094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182094) {
            ctx->pc = 0x1820D0u;
            return;
        }
    }
    ctx->pc = 0x18209Cu;
    // 0x18209c: 0x8f908660  lw          $s0, -0x79A0($gp)
    ctx->pc = 0x18209cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936160)));
    // 0x1820a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1820A0u;
    {
        const bool branch_taken_0x1820a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820a0) {
            ctx->pc = 0x1820C4u;
            return;
        }
    }
    ctx->pc = 0x1820A8u;
    // 0x1820a8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x1820a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1820ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1820ACu;
    {
        const bool branch_taken_0x1820ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1820ac) {
            ctx->pc = 0x1820BCu;
            return;
        }
    }
    ctx->pc = 0x1820B4u;
    // 0x1820b4: 0xc0485bc  jal         func_1216F0
    ctx->pc = 0x1820B4u;
    SET_GPR_U32(ctx, 31, 0x1820BCu);
    ctx->pc = 0x1216F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216F0u, 0x1820B4u, 0x1820BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1820BCu;
}
