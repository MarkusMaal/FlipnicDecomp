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

// Function: caseD_d
// Address: 0x11524c - 0x115290
void caseD_d_0x11524c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x11524c");
#endif

    switch (ctx->pc) {
        case 0x11524cu: goto label_11524c;
        case 0x115250u: goto label_115250;
        case 0x115254u: goto label_115254;
        case 0x115258u: goto label_115258;
        case 0x11525cu: goto label_11525c;
        case 0x115260u: goto label_115260;
        case 0x115264u: goto label_115264;
        case 0x115268u: goto label_115268;
        case 0x11526cu: goto label_11526c;
        case 0x115270u: goto label_115270;
        case 0x115274u: goto label_115274;
        case 0x115278u: goto label_115278;
        case 0x11527cu: goto label_11527c;
        case 0x115280u: goto label_115280;
        case 0x115284u: goto label_115284;
        case 0x115288u: goto label_115288;
        case 0x11528cu: goto label_11528c;
        default: break;
    }

    ctx->pc = 0x11524cu;

label_11524c:
    // 0x11524c: 0x938282c0  lbu         $v0, -0x7D40($gp)
    ctx->pc = 0x11524cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935232)));
label_115250:
    // 0x115250: 0x27a3014c  addiu       $v1, $sp, 0x14C
    ctx->pc = 0x115250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_115254:
    // 0x115254: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x115254u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_115258:
    // 0x115258: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_11525c:
    // 0x11525c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x11525cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_115260:
    // 0x115260: 0x320f809  jalr        $t9
label_115264:
    if (ctx->pc == 0x115264u) {
        ctx->pc = 0x115264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115260u;
        // 0x115264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115268u;
        goto label_115268;
    }
    ctx->pc = 0x115260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115268u);
        ctx->pc = 0x115264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115260u;
        // 0x115264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115260u, 0x115268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115268u;
label_115268:
    // 0x115268: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11526c:
    if (ctx->pc == 0x11526Cu) {
        ctx->pc = 0x115270u;
        goto label_115270;
    }
    ctx->pc = 0x115268u;
    {
        const bool branch_taken_0x115268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115268) {
            ctx->pc = 0x115290u;
            return;
        }
    }
    ctx->pc = 0x115270u;
label_115270:
    // 0x115270: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_115274:
    // 0x115274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115278:
    // 0x115278: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x115278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11527c:
    // 0x11527c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x11527cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_115280:
    // 0x115280: 0x320f809  jalr        $t9
label_115284:
    if (ctx->pc == 0x115284u) {
        ctx->pc = 0x115284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115280u;
        // 0x115284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x115288u;
        goto label_115288;
    }
    ctx->pc = 0x115280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x115288u);
        ctx->pc = 0x115284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115280u;
        // 0x115284: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115280u, 0x115288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x115288u;
label_115288:
    // 0x115288: 0x10000002  b           . + 4 + (0x2 << 2)
label_11528c:
    if (ctx->pc == 0x11528Cu) {
        ctx->pc = 0x11528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115288u;
        // 0x11528c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x115290u;
        goto label_fallthrough_0x115288;
    }
    ctx->pc = 0x115288u;
    {
        const bool branch_taken_0x115288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115288u;
        // 0x11528c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115288) {
            ctx->pc = 0x115294u;
            return;
        }
    }
label_fallthrough_0x115288:
    ctx->pc = 0x115290u;
}
