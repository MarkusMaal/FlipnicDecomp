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

// Function: entry_001ab1e8
// Address: 0x1ab1e8 - 0x1ab244
void entry_001ab1e8_0x1ab1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab1e8_0x1ab1e8");
#endif

    switch (ctx->pc) {
        case 0x1ab1f8u: goto label_1ab1f8;
        case 0x1ab214u: goto label_1ab214;
        case 0x1ab21cu: goto label_1ab21c;
        case 0x1ab22cu: goto label_1ab22c;
        case 0x1ab234u: goto label_1ab234;
        default: break;
    }

    ctx->pc = 0x1ab1e8u;

    // 0x1ab1e8: 0x2919021  addu        $s2, $s4, $s1
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x1ab1ec: 0x26530670  addiu       $s3, $s2, 0x670
    ctx->pc = 0x1ab1ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1648));
    // 0x1ab1f0: 0xc06ae4c  jal         func_1AB930
    ctx->pc = 0x1AB1F0u;
    SET_GPR_U32(ctx, 31, 0x1AB1F8u);
    ctx->pc = 0x1AB1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1F0u;
    // 0x1ab1f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB930u, 0x1AB1F0u, 0x1AB1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1F8u;
label_1ab1f8:
    // 0x1ab1f8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1AB1F8u;
    {
        const bool branch_taken_0x1ab1f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab1f8) {
            ctx->pc = 0x1AB244u;
            return;
        }
    }
    ctx->pc = 0x1AB200u;
    // 0x1ab200: 0x8e420670  lw          $v0, 0x670($s2)
    ctx->pc = 0x1ab200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1648)));
    // 0x1ab204: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ab204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ab208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ab20c: 0xc06ae48  jal         func_1AB920
    ctx->pc = 0x1AB20Cu;
    SET_GPR_U32(ctx, 31, 0x1AB214u);
    ctx->pc = 0x1AB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB20Cu;
    // 0x1ab210: 0xae420670  sw          $v0, 0x670($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 1648), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AB920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB920u, 0x1AB20Cu, 0x1AB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB214u;
label_1ab214:
    // 0x1ab214: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AB214u;
    SET_GPR_U32(ctx, 31, 0x1AB21Cu);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB214u, 0x1AB21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB21Cu;
label_1ab21c:
    // 0x1ab21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab220: 0x240500c4  addiu       $a1, $zero, 0xC4
    ctx->pc = 0x1ab220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    // 0x1ab224: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AB224u;
    SET_GPR_U32(ctx, 31, 0x1AB22Cu);
    ctx->pc = 0x1AB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB224u;
    // 0x1ab228: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB224u, 0x1AB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB22Cu;
label_1ab22c:
    // 0x1ab22c: 0xc062d50  jal         func_18B540
    ctx->pc = 0x1AB22Cu;
    SET_GPR_U32(ctx, 31, 0x1AB234u);
    ctx->pc = 0x18B540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B540u, 0x1AB22Cu, 0x1AB234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB234u;
label_1ab234:
    // 0x1ab234: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ab234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab238: 0x240500c6  addiu       $a1, $zero, 0xC6
    ctx->pc = 0x1ab238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 198));
    // 0x1ab23c: 0xc062b5c  jal         func_18AD70
    ctx->pc = 0x1AB23Cu;
    SET_GPR_U32(ctx, 31, 0x1AB244u);
    ctx->pc = 0x1AB240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB23Cu;
    // 0x1ab240: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AD70u, 0x1AB23Cu, 0x1AB244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB244u;
}
