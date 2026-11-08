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

// Function: FUN_00201240
// Address: 0x201240 - 0x201288
void FUN_00201240_0x201240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201240_0x201240");
#endif

    switch (ctx->pc) {
        case 0x201254u: goto label_201254;
        default: break;
    }

    ctx->pc = 0x201240u;

    // 0x201240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201244: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x201244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x201248: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20124c: 0xc080432  jal         func_2010C8
    ctx->pc = 0x20124Cu;
    SET_GPR_U32(ctx, 31, 0x201254u);
    ctx->pc = 0x201250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20124Cu;
    // 0x201250: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x20124Cu, 0x201254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201254u;
label_201254:
    // 0x201254: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201254u;
    {
        const bool branch_taken_0x201254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201254u;
        // 0x201258: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201254) {
            ctx->pc = 0x201278u;
            goto label_201278;
        }
    }
    ctx->pc = 0x20125Cu;
    // 0x20125c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x20125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x201260: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x201260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201264: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x201264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x201268: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x201268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x20126c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x20126cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201270: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x201270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x201274: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x201274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_201278:
    // 0x201278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20127c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20127cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201280: 0x3e00008  jr          $ra
    ctx->pc = 0x201280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201280u;
        // 0x201284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201288u;
}
