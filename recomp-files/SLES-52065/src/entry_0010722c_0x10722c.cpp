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

// Function: entry_0010722c
// Address: 0x10722c - 0x107268
void entry_0010722c_0x10722c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010722c_0x10722c");
#endif

    ctx->pc = 0x10722cu;

    // 0x10722c: 0x0  nop
    ctx->pc = 0x10722cu;
    // NOP
    // 0x107230: 0x14082a  slt         $at, $zero, $s4
    ctx->pc = 0x107230u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x107234: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x107234u;
    {
        const bool branch_taken_0x107234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x107234) {
            ctx->pc = 0x107268u;
            return;
        }
    }
    ctx->pc = 0x10723Cu;
    // 0x10723c: 0x8e620210  lw          $v0, 0x210($s3)
    ctx->pc = 0x10723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 528)));
    // 0x107240: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x107240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x107244: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x107244u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x107248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10724c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x107250: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x107250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107254: 0xa44001fa  sh          $zero, 0x1FA($v0)
    ctx->pc = 0x107254u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 506), (uint16_t)GPR_U32(ctx, 0));
    // 0x107258: 0xac4001fc  sw          $zero, 0x1FC($v0)
    ctx->pc = 0x107258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 508), GPR_U32(ctx, 0));
    // 0x10725c: 0x8e640220  lw          $a0, 0x220($s3)
    ctx->pc = 0x10725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 544)));
    // 0x107260: 0xc04ad30  jal         func_12B4C0
    ctx->pc = 0x107260u;
    SET_GPR_U32(ctx, 31, 0x107268u);
    ctx->pc = 0x107264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107260u;
    // 0x107264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B4C0u, 0x107260u, 0x107268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107268u;
}
