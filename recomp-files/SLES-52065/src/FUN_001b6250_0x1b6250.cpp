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

// Function: FUN_001b6250
// Address: 0x1b6250 - 0x1b62a4
void FUN_001b6250_0x1b6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b6250_0x1b6250");
#endif

    switch (ctx->pc) {
        case 0x1b6250u: goto label_1b6250;
        case 0x1b6254u: goto label_1b6254;
        case 0x1b6258u: goto label_1b6258;
        case 0x1b625cu: goto label_1b625c;
        case 0x1b6260u: goto label_1b6260;
        case 0x1b6264u: goto label_1b6264;
        case 0x1b6268u: goto label_1b6268;
        case 0x1b626cu: goto label_1b626c;
        case 0x1b6270u: goto label_1b6270;
        case 0x1b6274u: goto label_1b6274;
        case 0x1b6278u: goto label_1b6278;
        case 0x1b627cu: goto label_1b627c;
        case 0x1b6280u: goto label_1b6280;
        case 0x1b6284u: goto label_1b6284;
        case 0x1b6288u: goto label_1b6288;
        case 0x1b628cu: goto label_1b628c;
        case 0x1b6290u: goto label_1b6290;
        case 0x1b6294u: goto label_1b6294;
        case 0x1b6298u: goto label_1b6298;
        case 0x1b629cu: goto label_1b629c;
        case 0x1b62a0u: goto label_1b62a0;
        default: break;
    }

    ctx->pc = 0x1b6250u;

label_1b6250:
    // 0x1b6250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b6254:
    // 0x1b6254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b6258:
    // 0x1b6258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b6258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b625c:
    // 0x1b625c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b6260:
    // 0x1b6260: 0xafa5003c  sw          $a1, 0x3C($sp)
    ctx->pc = 0x1b6260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 5));
label_1b6264:
    // 0x1b6264: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x1b6264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1b6268:
    // 0x1b6268: 0xc06da14  jal         func_1B6850
label_1b626c:
    if (ctx->pc == 0x1B626Cu) {
        ctx->pc = 0x1B626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6268u;
        // 0x1b626c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6270u;
        goto label_1b6270;
    }
    ctx->pc = 0x1B6268u;
    SET_GPR_U32(ctx, 31, 0x1B6270u);
    ctx->pc = 0x1B626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6268u;
    // 0x1b626c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6850u, 0x1B6268u, 0x1B6270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6270u;
label_1b6270:
    // 0x1b6270: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b6270u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b6274:
    // 0x1b6274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b6274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6278:
    // 0x1b6278: 0xc04fd04  jal         func_13F410
label_1b627c:
    if (ctx->pc == 0x1B627Cu) {
        ctx->pc = 0x1B627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6278u;
        // 0x1b627c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6280u;
        goto label_1b6280;
    }
    ctx->pc = 0x1B6278u;
    SET_GPR_U32(ctx, 31, 0x1B6280u);
    ctx->pc = 0x1B627Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6278u;
    // 0x1b627c: 0x27a5003c  addiu       $a1, $sp, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F410u, 0x1B6278u, 0x1B6280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6280u;
label_1b6280:
    // 0x1b6280: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1b6280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6284:
    // 0x1b6284: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b6284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b6288:
    // 0x1b6288: 0x320f809  jalr        $t9
label_1b628c:
    if (ctx->pc == 0x1B628Cu) {
        ctx->pc = 0x1B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6288u;
        // 0x1b628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6290u;
        goto label_1b6290;
    }
    ctx->pc = 0x1B6288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B6290u);
        ctx->pc = 0x1B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6288u;
        // 0x1b628c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6288u, 0x1B6290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6290u;
label_1b6290:
    // 0x1b6290: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b6290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b6294:
    // 0x1b6294: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b6294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b6298:
    // 0x1b6298: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b6298u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b629c:
    // 0x1b629c: 0x3e00008  jr          $ra
label_1b62a0:
    if (ctx->pc == 0x1B62A0u) {
        ctx->pc = 0x1B62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B629Cu;
        // 0x1b62a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B62A4u;
        goto label_fallthrough_0x1b629c;
    }
    ctx->pc = 0x1B629Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B62A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B629Cu;
        // 0x1b62a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B629Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b629c:
    ctx->pc = 0x1B62A4u;
}
