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

// Function: FUN_0012f230
// Address: 0x12f230 - 0x12f284
void FUN_0012f230_0x12f230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012f230_0x12f230");
#endif

    switch (ctx->pc) {
        case 0x12f254u: goto label_12f254;
        case 0x12f26cu: goto label_12f26c;
        default: break;
    }

    ctx->pc = 0x12f230u;

    // 0x12f230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12f230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12f234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12f234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12f238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12f238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12f23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12f23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12f240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f244: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12F244u;
    {
        const bool branch_taken_0x12f244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F244u;
        // 0x12f248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f244) {
            ctx->pc = 0x12F26Cu;
            goto label_12f26c;
        }
    }
    ctx->pc = 0x12F24Cu;
    // 0x12f24c: 0xc04018c  jal         func_100630
    ctx->pc = 0x12F24Cu;
    SET_GPR_U32(ctx, 31, 0x12F254u);
    ctx->pc = 0x12F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F24Cu;
    // 0x12f250: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100630u, 0x12F24Cu, 0x12F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F254u;
label_12f254:
    // 0x12f254: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x12f254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x12f258: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x12f258u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x12f25c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F25Cu;
    {
        const bool branch_taken_0x12f25c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x12F260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F25Cu;
        // 0x12f260: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f25c) {
            ctx->pc = 0x12F270u;
            goto label_12f270;
        }
    }
    ctx->pc = 0x12F264u;
    // 0x12f264: 0xc0401a4  jal         func_100690
    ctx->pc = 0x12F264u;
    SET_GPR_U32(ctx, 31, 0x12F26Cu);
    ctx->pc = 0x12F268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F264u;
    // 0x12f268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x12F264u, 0x12F26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F26Cu;
label_12f26c:
    // 0x12f26c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12f26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12f270:
    // 0x12f270: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12f270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f274: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12f274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f278: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12f278u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f27c: 0x3e00008  jr          $ra
    ctx->pc = 0x12F27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F27Cu;
        // 0x12f280: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F284u;
}
