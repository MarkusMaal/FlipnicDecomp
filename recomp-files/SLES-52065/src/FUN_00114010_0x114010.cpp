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

// Function: FUN_00114010
// Address: 0x114010 - 0x114060
void FUN_00114010_0x114010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114010_0x114010");
#endif

    switch (ctx->pc) {
        case 0x114010u: goto label_114010;
        case 0x114014u: goto label_114014;
        case 0x114018u: goto label_114018;
        case 0x11401cu: goto label_11401c;
        case 0x114020u: goto label_114020;
        case 0x114024u: goto label_114024;
        case 0x114028u: goto label_114028;
        case 0x11402cu: goto label_11402c;
        case 0x114030u: goto label_114030;
        case 0x114034u: goto label_114034;
        case 0x114038u: goto label_114038;
        case 0x11403cu: goto label_11403c;
        case 0x114040u: goto label_114040;
        case 0x114044u: goto label_114044;
        case 0x114048u: goto label_114048;
        case 0x11404cu: goto label_11404c;
        case 0x114050u: goto label_114050;
        case 0x114054u: goto label_114054;
        case 0x114058u: goto label_114058;
        case 0x11405cu: goto label_11405c;
        default: break;
    }

    ctx->pc = 0x114010u;

label_114010:
    // 0x114010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x114010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_114014:
    // 0x114014: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x114014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_114018:
    // 0x114018: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_11401c:
    // 0x11401c: 0xe7ac001c  swc1        $f12, 0x1C($sp)
    ctx->pc = 0x11401cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_114020:
    // 0x114020: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x114020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_114024:
    // 0x114024: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x114024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_114028:
    // 0x114028: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x114028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_11402c:
    // 0x11402c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x11402cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_114030:
    // 0x114030: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x114030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_114034:
    // 0x114034: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x114034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_114038:
    // 0x114038: 0x320f809  jalr        $t9
label_11403c:
    if (ctx->pc == 0x11403Cu) {
        ctx->pc = 0x11403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114038u;
        // 0x11403c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114040u;
        goto label_114040;
    }
    ctx->pc = 0x114038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114040u);
        ctx->pc = 0x11403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114038u;
        // 0x11403c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114038u, 0x114040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114040u;
label_114040:
    // 0x114040: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x114040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_114044:
    // 0x114044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x114044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_114048:
    // 0x114048: 0x8f3900c8  lw          $t9, 0xC8($t9)
    ctx->pc = 0x114048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 200)));
label_11404c:
    // 0x11404c: 0x320f809  jalr        $t9
label_114050:
    if (ctx->pc == 0x114050u) {
        ctx->pc = 0x114050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11404Cu;
        // 0x114050: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114054u;
        goto label_114054;
    }
    ctx->pc = 0x11404Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x114054u);
        ctx->pc = 0x114050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11404Cu;
        // 0x114050: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11404Cu, 0x114054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x114054u;
label_114054:
    // 0x114054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_114058:
    // 0x114058: 0x3e00008  jr          $ra
label_11405c:
    if (ctx->pc == 0x11405Cu) {
        ctx->pc = 0x11405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114058u;
        // 0x11405c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x114060u;
        goto label_fallthrough_0x114058;
    }
    ctx->pc = 0x114058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114058u;
        // 0x11405c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x114058:
    ctx->pc = 0x114060u;
}
