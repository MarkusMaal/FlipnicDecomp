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

// Function: entry_0013461c
// Address: 0x13461c - 0x13466c
void entry_0013461c_0x13461c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013461c_0x13461c");
#endif

    switch (ctx->pc) {
        case 0x13462cu: goto label_13462c;
        case 0x134648u: goto label_134648;
        case 0x134664u: goto label_134664;
        default: break;
    }

    ctx->pc = 0x13461cu;

    // 0x13461c: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x13461cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x134620: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x134620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x134624: 0xc080874  jal         func_2021D0
    ctx->pc = 0x134624u;
    SET_GPR_U32(ctx, 31, 0x13462Cu);
    ctx->pc = 0x134628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134624u;
    // 0x134628: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2021D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2021D0u, 0x134624u, 0x13462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13462Cu;
label_13462c:
    // 0x13462c: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x13462cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x134630: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x134630u;
    {
        const bool branch_taken_0x134630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134630u;
        // 0x134634: 0x3c050022  lui         $a1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134630) {
            ctx->pc = 0x13466Cu;
            return;
        }
    }
    ctx->pc = 0x134638u;
    // 0x134638: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x134638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x13463c: 0x24a5eea8  addiu       $a1, $a1, -0x1158
    ctx->pc = 0x13463cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962856));
    // 0x134640: 0xc0805e6  jal         func_201798
    ctx->pc = 0x134640u;
    SET_GPR_U32(ctx, 31, 0x134648u);
    ctx->pc = 0x134644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134640u;
    // 0x134644: 0x27a603fc  addiu       $a2, $sp, 0x3FC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1020));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201798u, 0x134640u, 0x134648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134648u;
label_134648:
    // 0x134648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13464c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13464Cu;
    {
        const bool branch_taken_0x13464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13464c) {
            ctx->pc = 0x13466Cu;
            return;
        }
    }
    ctx->pc = 0x134654u;
    // 0x134654: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x134654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x134658: 0x8fa603fc  lw          $a2, 0x3FC($sp)
    ctx->pc = 0x134658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1020)));
    // 0x13465c: 0xc04f858  jal         func_13E160
    ctx->pc = 0x13465Cu;
    SET_GPR_U32(ctx, 31, 0x134664u);
    ctx->pc = 0x134660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13465Cu;
    // 0x134660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E160u, 0x13465Cu, 0x134664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134664u;
label_134664:
    // 0x134664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134668: 0xa2420093  sb          $v0, 0x93($s2)
    ctx->pc = 0x134668u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 147), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x13466cu;
}
