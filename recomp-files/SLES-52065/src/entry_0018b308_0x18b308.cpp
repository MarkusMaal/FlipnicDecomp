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

// Function: entry_0018b308
// Address: 0x18b308 - 0x18b374
void entry_0018b308_0x18b308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b308_0x18b308");
#endif

    switch (ctx->pc) {
        case 0x18b31cu: goto label_18b31c;
        case 0x18b33cu: goto label_18b33c;
        case 0x18b360u: goto label_18b360;
        default: break;
    }

    ctx->pc = 0x18b308u;

    // 0x18b308: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x18b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x18b30c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18b310: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x18b310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b314: 0xc0806b0  jal         func_201AC0
    ctx->pc = 0x18B314u;
    SET_GPR_U32(ctx, 31, 0x18B31Cu);
    ctx->pc = 0x18B318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B314u;
    // 0x18b318: 0x24440acc  addiu       $a0, $v0, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AC0u, 0x18B314u, 0x18B31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B31Cu;
label_18b31c:
    // 0x18b31c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18B31Cu;
    {
        const bool branch_taken_0x18b31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b31c) {
            ctx->pc = 0x18B374u;
            return;
        }
    }
    ctx->pc = 0x18B324u;
    // 0x18b324: 0x11a140  sll         $s4, $s1, 5
    ctx->pc = 0x18b324u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x18b328: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x18b328u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x18b32c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x18b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x18b330: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b334: 0xc077ca6  jal         func_1DF298
    ctx->pc = 0x18B334u;
    SET_GPR_U32(ctx, 31, 0x18B33Cu);
    ctx->pc = 0x18B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B334u;
    // 0x18b338: 0x8c442acc  lw          $a0, 0x2ACC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF298u, 0x18B334u, 0x18B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B33Cu;
label_18b33c:
    // 0x18b33c: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x18b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x18b340: 0x118a40  sll         $s1, $s1, 9
    ctx->pc = 0x18b340u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    // 0x18b344: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18b344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x18b348: 0x129180  sll         $s2, $s2, 6
    ctx->pc = 0x18b348u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x18b34c: 0x8c4408cc  lw          $a0, 0x8CC($v0)
    ctx->pc = 0x18b34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2252)));
    // 0x18b350: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x18b350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x18b354: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x18b354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x18b358: 0xc046c14  jal         func_11B050
    ctx->pc = 0x18B358u;
    SET_GPR_U32(ctx, 31, 0x18B360u);
    ctx->pc = 0x18B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B358u;
    // 0x18b35c: 0x24450acc  addiu       $a1, $v0, 0xACC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2764));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B050u, 0x18B358u, 0x18B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B360u;
label_18b360:
    // 0x18b360: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x18b360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x18b364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18b368: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x18b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x18b36c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x18B36Cu;
    {
        const bool branch_taken_0x18b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B36Cu;
        // 0x18b370: 0xa0600acc  sb          $zero, 0xACC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b36c) {
            ctx->pc = 0x18B398u;
            return;
        }
    }
    ctx->pc = 0x18B374u;
}
