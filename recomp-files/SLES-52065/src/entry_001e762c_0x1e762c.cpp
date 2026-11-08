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

// Function: entry_001e762c
// Address: 0x1e762c - 0x1e766c
void entry_001e762c_0x1e762c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e762c_0x1e762c");
#endif

    ctx->pc = 0x1e762cu;

    // 0x1e762c: 0x97a3006a  lhu         $v1, 0x6A($sp)
    ctx->pc = 0x1e762cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 106)));
    // 0x1e7630: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1e7630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e7634: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7634u;
    {
        const bool branch_taken_0x1e7634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7634) {
            ctx->pc = 0x1E766Cu;
            return;
        }
    }
    ctx->pc = 0x1E763Cu;
    // 0x1e763c: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1e763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1e7640: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1e7640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1e7644: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x1e7644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1e7648: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e7648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e764c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1e764cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e7650: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1e7650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1e7654: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1e7654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e7658: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1e7658u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1e765c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e765cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e7660: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x1e7660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7664: 0xc079ebc  jal         func_1E7AF0
    ctx->pc = 0x1E7664u;
    SET_GPR_U32(ctx, 31, 0x1E766Cu);
    ctx->pc = 0x1E7668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7664u;
    // 0x1e7668: 0xa7a20068  sh          $v0, 0x68($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7AF0u, 0x1E7664u, 0x1E766Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E766Cu;
}
