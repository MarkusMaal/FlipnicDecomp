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

// Function: entry_001091fc
// Address: 0x1091fc - 0x109258
void entry_001091fc_0x1091fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091fc_0x1091fc");
#endif

    switch (ctx->pc) {
        case 0x109214u: goto label_109214;
        case 0x109220u: goto label_109220;
        default: break;
    }

    ctx->pc = 0x1091fcu;

    // 0x1091fc: 0xa47101ec  sh          $s1, 0x1EC($v1)
    ctx->pc = 0x1091fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 492), (uint16_t)GPR_U32(ctx, 17));
    // 0x109200: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x109200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x109204: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x109204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109208: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10920c: 0xc049e34  jal         func_1278D0
    ctx->pc = 0x10920Cu;
    SET_GPR_U32(ctx, 31, 0x109214u);
    ctx->pc = 0x109210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10920Cu;
    // 0x109210: 0x80540024  lb          $s4, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1278D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1278D0u, 0x10920Cu, 0x109214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109214u;
label_109214:
    // 0x109214: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x109214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109218: 0xc04a078  jal         func_1281E0
    ctx->pc = 0x109218u;
    SET_GPR_U32(ctx, 31, 0x109220u);
    ctx->pc = 0x10921Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109218u;
    // 0x10921c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1281E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1281E0u, 0x109218u, 0x109220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109220u;
label_109220:
    // 0x109220: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x109220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x109224: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x109224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x109228: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x109228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x10922c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x10922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x109230: 0x8c642cd8  lw          $a0, 0x2CD8($v1)
    ctx->pc = 0x109230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x109234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x109234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109238: 0xac830234  sw          $v1, 0x234($a0)
    ctx->pc = 0x109238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 3));
    // 0x10923c: 0x8c422cd8  lw          $v0, 0x2CD8($v0)
    ctx->pc = 0x10923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11480)));
    // 0x109240: 0xac430234  sw          $v1, 0x234($v0)
    ctx->pc = 0x109240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 564), GPR_U32(ctx, 3));
    // 0x109244: 0x8e632cd0  lw          $v1, 0x2CD0($s3)
    ctx->pc = 0x109244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11472)));
    // 0x109248: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x109248u;
    {
        const bool branch_taken_0x109248 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x10924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109248u;
        // 0x10924c: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109248) {
            ctx->pc = 0x109258u;
            return;
        }
    }
    ctx->pc = 0x109250u;
    // 0x109250: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x109250u;
    {
        const bool branch_taken_0x109250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109250u;
        // 0x109254: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109250) {
            ctx->pc = 0x109270u;
            return;
        }
    }
    ctx->pc = 0x109258u;
}
