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

// Function: entry_001400dc
// Address: 0x1400dc - 0x140124
void entry_001400dc_0x1400dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001400dc_0x1400dc");
#endif

    switch (ctx->pc) {
        case 0x140100u: goto label_140100;
        default: break;
    }

    ctx->pc = 0x1400dcu;

    // 0x1400dc: 0x0  nop
    ctx->pc = 0x1400dcu;
    // NOP
    // 0x1400e0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1400e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1400e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1400e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1400e8: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x1400e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x1400ec: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x1400ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1400f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1400f4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1400f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1400f8: 0xc04fe3c  jal         func_13F8F0
    ctx->pc = 0x1400F8u;
    SET_GPR_U32(ctx, 31, 0x140100u);
    ctx->pc = 0x1400FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1400F8u;
    // 0x1400fc: 0xafa00118  sw          $zero, 0x118($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8F0u, 0x1400F8u, 0x140100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140100u;
label_140100:
    // 0x140100: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x140104: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140108: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x140108u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x14010c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x14010cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x140110: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x140110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x140114: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x140114u;
    {
        const bool branch_taken_0x140114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140114) {
            ctx->pc = 0x140124u;
            return;
        }
    }
    ctx->pc = 0x14011Cu;
    // 0x14011c: 0x1000ff86  b           . + 4 + (-0x7A << 2)
    ctx->pc = 0x14011Cu;
    {
        const bool branch_taken_0x14011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14011Cu;
        // 0x140120: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14011c) {
            ctx->pc = 0x13FF38u;
            return;
        }
    }
    ctx->pc = 0x140124u;
}
