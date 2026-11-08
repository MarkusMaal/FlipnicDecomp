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

// Function: entry_00162330
// Address: 0x162330 - 0x162388
void entry_00162330_0x162330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00162330_0x162330");
#endif

    switch (ctx->pc) {
        case 0x16235cu: goto label_16235c;
        case 0x162380u: goto label_162380;
        default: break;
    }

    ctx->pc = 0x162330u;

label_162330:
    // 0x162330: 0x16c00017  bnez        $s6, . + 4 + (0x17 << 2)
label_162334:
    if (ctx->pc == 0x162334u) {
        ctx->pc = 0x162334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162330u;
        // 0x162334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162338u;
        goto label_162338;
    }
    ctx->pc = 0x162330u;
    {
        const bool branch_taken_0x162330 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x162334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162330u;
        // 0x162334: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162330) {
            ctx->pc = 0x162390u;
            return;
        }
    }
    ctx->pc = 0x162338u;
label_162338:
    // 0x162338: 0x16620015  bne         $s3, $v0, . + 4 + (0x15 << 2)
label_16233c:
    if (ctx->pc == 0x16233Cu) {
        ctx->pc = 0x162340u;
        goto label_162340;
    }
    ctx->pc = 0x162338u;
    {
        const bool branch_taken_0x162338 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x162338) {
            ctx->pc = 0x162390u;
            return;
        }
    }
    ctx->pc = 0x162340u;
label_162340:
    // 0x162340: 0x8e4401f0  lw          $a0, 0x1F0($s2)
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
label_162344:
    // 0x162344: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x162344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_162348:
    // 0x162348: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_16234c:
    // 0x16234c: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_162350:
    // 0x162350: 0x26280300  addiu       $t0, $s1, 0x300
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_162354:
    // 0x162354: 0xc05541c  jal         func_155070
label_162358:
    if (ctx->pc == 0x162358u) {
        ctx->pc = 0x162358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162354u;
        // 0x162358: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16235Cu;
        goto label_16235c;
    }
    ctx->pc = 0x162354u;
    SET_GPR_U32(ctx, 31, 0x16235Cu);
    ctx->pc = 0x162358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162354u;
    // 0x162358: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155070u, 0x162354u, 0x16235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16235Cu;
label_16235c:
    // 0x16235c: 0xae220338  sw          $v0, 0x338($s1)
    ctx->pc = 0x16235cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 2));
label_162360:
    // 0x162360: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x162360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_162364:
    // 0x162364: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_162368:
    if (ctx->pc == 0x162368u) {
        ctx->pc = 0x16236Cu;
        goto label_16236c;
    }
    ctx->pc = 0x162364u;
    {
        const bool branch_taken_0x162364 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x162364) {
            ctx->pc = 0x162388u;
            return;
        }
    }
    ctx->pc = 0x16236Cu;
label_16236c:
    // 0x16236c: 0x8e590008  lw          $t9, 0x8($s2)
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_162370:
    // 0x162370: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x162370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_162374:
    // 0x162374: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x162374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_162378:
    // 0x162378: 0x320f809  jalr        $t9
label_16237c:
    if (ctx->pc == 0x16237Cu) {
        ctx->pc = 0x16237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162378u;
        // 0x16237c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162380u;
        goto label_162380;
    }
    ctx->pc = 0x162378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x162380u);
        ctx->pc = 0x16237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162378u;
        // 0x16237c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162378u, 0x162380u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162380u;
label_162380:
    // 0x162380: 0x1000029e  b           . + 4 + (0x29E << 2)
label_162384:
    if (ctx->pc == 0x162384u) {
        ctx->pc = 0x162384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162380u;
        // 0x162384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162388u;
        goto label_fallthrough_0x162380;
    }
    ctx->pc = 0x162380u;
    {
        const bool branch_taken_0x162380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162380u;
        // 0x162384: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162380) {
            ctx->pc = 0x162DFCu;
            return;
        }
    }
label_fallthrough_0x162380:
    ctx->pc = 0x162388u;
}
