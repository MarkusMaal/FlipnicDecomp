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

// Function: FUN_00105230
// Address: 0x105230 - 0x1052b0
void FUN_00105230_0x105230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00105230_0x105230");
#endif

    switch (ctx->pc) {
        case 0x10529cu: goto label_10529c;
        default: break;
    }

    ctx->pc = 0x105230u;

    // 0x105230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x105238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10523c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10523cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105240: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x105240u;
    {
        const bool branch_taken_0x105240 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105240u;
        // 0x105244: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105240) {
            ctx->pc = 0x1052A0u;
            goto label_1052a0;
        }
    }
    ctx->pc = 0x105248u;
    // 0x105248: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10524c: 0x2442a130  addiu       $v0, $v0, -0x5ED0
    ctx->pc = 0x10524cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943024));
    // 0x105250: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x105250u;
    {
        const bool branch_taken_0x105250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105250u;
        // 0x105254: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105250) {
            ctx->pc = 0x105284u;
            goto label_105284;
        }
    }
    ctx->pc = 0x105258u;
    // 0x105258: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10525c: 0x2442a250  addiu       $v0, $v0, -0x5DB0
    ctx->pc = 0x10525cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943312));
    // 0x105260: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x105260u;
    {
        const bool branch_taken_0x105260 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105260u;
        // 0x105264: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105260) {
            ctx->pc = 0x105284u;
            goto label_105284;
        }
    }
    ctx->pc = 0x105268u;
    // 0x105268: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10526c: 0x24429f50  addiu       $v0, $v0, -0x60B0
    ctx->pc = 0x10526cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942544));
    // 0x105270: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105270u;
    {
        const bool branch_taken_0x105270 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x105274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105270u;
        // 0x105274: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105270) {
            ctx->pc = 0x105284u;
            goto label_105284;
        }
    }
    ctx->pc = 0x105278u;
    // 0x105278: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x105278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x10527c: 0x24429a10  addiu       $v0, $v0, -0x65F0
    ctx->pc = 0x10527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941200));
    // 0x105280: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x105280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_105284:
    // 0x105284: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x105284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x105288: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x105288u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10528c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10528Cu;
    {
        const bool branch_taken_0x10528c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x105290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10528Cu;
        // 0x105290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10528c) {
            ctx->pc = 0x10529Cu;
            goto label_10529c;
        }
    }
    ctx->pc = 0x105294u;
    // 0x105294: 0xc0401a4  jal         func_100690
    ctx->pc = 0x105294u;
    SET_GPR_U32(ctx, 31, 0x10529Cu);
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x105294u, 0x10529Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10529Cu;
label_10529c:
    // 0x10529c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10529cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1052a0:
    // 0x1052a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1052a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1052a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1052a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1052a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1052A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1052ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1052A8u;
        // 0x1052ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1052A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1052B0u;
}
