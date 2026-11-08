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

// Function: entry_0010b904
// Address: 0x10b904 - 0x10b980
void entry_0010b904_0x10b904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010b904_0x10b904");
#endif

    switch (ctx->pc) {
        case 0x10b944u: goto label_10b944;
        case 0x10b950u: goto label_10b950;
        default: break;
    }

    ctx->pc = 0x10b904u;

label_10b904:
    // 0x10b904: 0x0  nop
    ctx->pc = 0x10b904u;
    // NOP
label_10b908:
    // 0x10b908: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x10b908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_10b90c:
    // 0x10b90c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x10b90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_10b910:
    // 0x10b910: 0x8f8485f4  lw          $a0, -0x7A0C($gp)
    ctx->pc = 0x10b910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
label_10b914:
    // 0x10b914: 0x8463230c  lh          $v1, 0x230C($v1)
    ctx->pc = 0x10b914u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8972)));
label_10b918:
    // 0x10b918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10b918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_10b91c:
    // 0x10b91c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x10b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_10b920:
    // 0x10b920: 0x8c742cd8  lw          $s4, 0x2CD8($v1)
    ctx->pc = 0x10b920u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
label_10b924:
    // 0x10b924: 0x928301d3  lbu         $v1, 0x1D3($s4)
    ctx->pc = 0x10b924u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 467)));
label_10b928:
    // 0x10b928: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_10b92c:
    if (ctx->pc == 0x10B92Cu) {
        ctx->pc = 0x10B930u;
        goto label_10b930;
    }
    ctx->pc = 0x10B928u;
    {
        const bool branch_taken_0x10b928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b928) {
            ctx->pc = 0x10B998u;
            return;
        }
    }
    ctx->pc = 0x10B930u;
label_10b930:
    // 0x10b930: 0x8e990008  lw          $t9, 0x8($s4)
    ctx->pc = 0x10b930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10b934:
    // 0x10b934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b938:
    // 0x10b938: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x10b938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_10b93c:
    // 0x10b93c: 0x320f809  jalr        $t9
label_10b940:
    if (ctx->pc == 0x10B940u) {
        ctx->pc = 0x10B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B93Cu;
        // 0x10b940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B944u;
        goto label_10b944;
    }
    ctx->pc = 0x10B93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10B944u);
        ctx->pc = 0x10B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B93Cu;
        // 0x10b940: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B93Cu, 0x10B944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10B944u;
label_10b944:
    // 0x10b944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10b948:
    // 0x10b948: 0xc043088  jal         func_10C220
label_10b94c:
    if (ctx->pc == 0x10B94Cu) {
        ctx->pc = 0x10B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B948u;
        // 0x10b94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10B950u;
        goto label_10b950;
    }
    ctx->pc = 0x10B948u;
    SET_GPR_U32(ctx, 31, 0x10B950u);
    ctx->pc = 0x10B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B948u;
    // 0x10b94c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C220u, 0x10B948u, 0x10B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B950u;
label_10b950:
    // 0x10b950: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x10b950u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_10b954:
    // 0x10b954: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
label_10b958:
    if (ctx->pc == 0x10B958u) {
        ctx->pc = 0x10B95Cu;
        goto label_10b95c;
    }
    ctx->pc = 0x10B954u;
    {
        const bool branch_taken_0x10b954 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x10b954) {
            ctx->pc = 0x10B980u;
            return;
        }
    }
    ctx->pc = 0x10B95Cu;
label_10b95c:
    // 0x10b95c: 0x8e8201fc  lw          $v0, 0x1FC($s4)
    ctx->pc = 0x10b95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 508)));
label_10b960:
    // 0x10b960: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b964:
    // 0x10b964: 0xae8201fc  sw          $v0, 0x1FC($s4)
    ctx->pc = 0x10b964u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 508), GPR_U32(ctx, 2));
label_10b968:
    // 0x10b968: 0x868201fa  lh          $v0, 0x1FA($s4)
    ctx->pc = 0x10b968u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 506)));
label_10b96c:
    // 0x10b96c: 0x28410064  slti        $at, $v0, 0x64
    ctx->pc = 0x10b96cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)100) ? 1 : 0);
label_10b970:
    // 0x10b970: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_10b974:
    if (ctx->pc == 0x10B974u) {
        ctx->pc = 0x10B978u;
        goto label_10b978;
    }
    ctx->pc = 0x10B970u;
    {
        const bool branch_taken_0x10b970 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x10b970) {
            ctx->pc = 0x10B980u;
            return;
        }
    }
    ctx->pc = 0x10B978u;
label_10b978:
    // 0x10b978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_10b97c:
    // 0x10b97c: 0xa68201fa  sh          $v0, 0x1FA($s4)
    ctx->pc = 0x10b97cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 506), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x10b980u;
}
