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

// Function: entry_001baf78
// Address: 0x1baf78 - 0x1bafc8
void entry_001baf78_0x1baf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf78_0x1baf78");
#endif

    switch (ctx->pc) {
        case 0x1baf8cu: goto label_1baf8c;
        case 0x1baf98u: goto label_1baf98;
        case 0x1bafa4u: goto label_1bafa4;
        case 0x1bafbcu: goto label_1bafbc;
        default: break;
    }

    ctx->pc = 0x1baf78u;

    // 0x1baf78: 0x26420004  addiu       $v0, $s2, 0x4
    ctx->pc = 0x1baf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1baf7c: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BAF7Cu;
    {
        const bool branch_taken_0x1baf7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAF7Cu;
        // 0x1baf80: 0x26430004  addiu       $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1baf7c) {
            ctx->pc = 0x1BAFC8u;
            return;
        }
    }
    ctx->pc = 0x1BAF84u;
    // 0x1baf84: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF84u;
    SET_GPR_U32(ctx, 31, 0x1BAF8Cu);
    ctx->pc = 0x1BAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF84u;
    // 0x1baf88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF84u, 0x1BAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF8Cu;
label_1baf8c:
    // 0x1baf8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1baf8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf90: 0xc04887c  jal         func_1221F0
    ctx->pc = 0x1BAF90u;
    SET_GPR_U32(ctx, 31, 0x1BAF98u);
    ctx->pc = 0x1BAF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF90u;
    // 0x1baf94: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1221F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1221F0u, 0x1BAF90u, 0x1BAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF98u;
label_1baf98:
    // 0x1baf98: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1baf98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1baf9c: 0xc048880  jal         func_122200
    ctx->pc = 0x1BAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1BAFA4u);
    ctx->pc = 0x1BAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAF9Cu;
    // 0x1bafa0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122200u, 0x1BAF9Cu, 0x1BAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFA4u;
label_1bafa4:
    // 0x1bafa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bafa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafa8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bafa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1bafacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bafb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bafb4: 0xc048bbc  jal         func_122EF0
    ctx->pc = 0x1BAFB4u;
    SET_GPR_U32(ctx, 31, 0x1BAFBCu);
    ctx->pc = 0x1BAFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BAFB4u;
    // 0x1bafb8: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EF0u, 0x1BAFB4u, 0x1BAFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAFBCu;
label_1bafbc:
    // 0x1bafbc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BAFBCu;
    {
        const bool branch_taken_0x1bafbc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1bafbc) {
            ctx->pc = 0x1BAFD4u;
            return;
        }
    }
    ctx->pc = 0x1BAFC4u;
    // 0x1bafc4: 0x26430004  addiu       $v1, $s2, 0x4
    ctx->pc = 0x1bafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->pc = 0x1bafc8u;
}
