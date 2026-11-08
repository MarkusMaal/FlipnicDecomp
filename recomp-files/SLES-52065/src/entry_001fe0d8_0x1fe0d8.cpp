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

// Function: entry_001fe0d8
// Address: 0x1fe0d8 - 0x1fe124
void entry_001fe0d8_0x1fe0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe0d8_0x1fe0d8");
#endif

    switch (ctx->pc) {
        case 0x1fe0fcu: goto label_1fe0fc;
        default: break;
    }

    ctx->pc = 0x1fe0d8u;

    // 0x1fe0d8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1fe0d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1fe0dc: 0x272182f  dsubu       $v1, $s3, $s2
    ctx->pc = 0x1fe0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) - GPR_U64(ctx, 18));
    // 0x1fe0e0: 0x3883c  dsll32      $s1, $v1, 0
    ctx->pc = 0x1fe0e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1fe0e4: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x1fe0e4u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1fe0e8: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x1fe0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x1fe0ec: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FE0ECu;
    {
        const bool branch_taken_0x1fe0ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE0ECu;
        // 0x1fe0f0: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe0ec) {
            ctx->pc = 0x1FE124u;
            return;
        }
    }
    ctx->pc = 0x1FE0F4u;
    // 0x1fe0f4: 0xc080432  jal         func_2010C8
    ctx->pc = 0x1FE0F4u;
    SET_GPR_U32(ctx, 31, 0x1FE0FCu);
    ctx->pc = 0x1FE0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE0F4u;
    // 0x1fe0f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2010C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2010C8u, 0x1FE0F4u, 0x1FE0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE0FCu;
label_1fe0fc:
    // 0x1fe0fc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE0FCu;
    {
        const bool branch_taken_0x1fe0fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe0fc) {
            ctx->pc = 0x1FE12Cu;
            return;
        }
    }
    ctx->pc = 0x1FE104u;
    // 0x1fe104: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fe104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fe108: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x1fe108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1fe10c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FE10Cu;
    {
        const bool branch_taken_0x1fe10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE10Cu;
        // 0x1fe110: 0x711823  subu        $v1, $v1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe10c) {
            ctx->pc = 0x1FE12Cu;
            return;
        }
    }
    ctx->pc = 0x1FE114u;
    // 0x1fe114: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fe114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe118: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1fe118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1fe11c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fe11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fe120: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fe120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1fe124u;
}
