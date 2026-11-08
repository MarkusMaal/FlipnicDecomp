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

// Function: entry_001aa1ec
// Address: 0x1aa1ec - 0x1aa234
void entry_001aa1ec_0x1aa1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa1ec_0x1aa1ec");
#endif

    switch (ctx->pc) {
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa21cu: goto label_1aa21c;
        default: break;
    }

    ctx->pc = 0x1aa1ecu;

    // 0x1aa1ec: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1aa1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1aa1f0: 0x26240770  addiu       $a0, $s1, 0x770
    ctx->pc = 0x1aa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1904));
    // 0x1aa1f4: 0x24a56dd0  addiu       $a1, $a1, 0x6DD0
    ctx->pc = 0x1aa1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28112));
    // 0x1aa1f8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x1aa1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1aa1fc: 0xc07a3bc  jal         func_1E8EF0
    ctx->pc = 0x1AA1FCu;
    SET_GPR_U32(ctx, 31, 0x1AA204u);
    ctx->pc = 0x1AA200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA1FCu;
    // 0x1aa200: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8EF0u, 0x1AA1FCu, 0x1AA204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA204u;
label_1aa204:
    // 0x1aa204: 0x262406d0  addiu       $a0, $s1, 0x6D0
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1744));
    // 0x1aa208: 0xc0621ec  jal         func_1887B0
    ctx->pc = 0x1AA208u;
    SET_GPR_U32(ctx, 31, 0x1AA210u);
    ctx->pc = 0x1AA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA208u;
    // 0x1aa20c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1887B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1887B0u, 0x1AA208u, 0x1AA210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA210u;
label_1aa210:
    // 0x1aa210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa214: 0xc064324  jal         func_190C90
    ctx->pc = 0x1AA214u;
    SET_GPR_U32(ctx, 31, 0x1AA21Cu);
    ctx->pc = 0x1AA218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA214u;
    // 0x1aa218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190C90u, 0x1AA214u, 0x1AA21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA21Cu;
label_1aa21c:
    // 0x1aa21c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x1aa21cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x1aa220: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1aa220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1aa224: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA224u;
    {
        const bool branch_taken_0x1aa224 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA224u;
        // 0x1aa228: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa224) {
            ctx->pc = 0x1AA238u;
            return;
        }
    }
    ctx->pc = 0x1AA22Cu;
    // 0x1aa22c: 0xc0401a4  jal         func_100690
    ctx->pc = 0x1AA22Cu;
    SET_GPR_U32(ctx, 31, 0x1AA234u);
    ctx->pc = 0x1AA230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA22Cu;
    // 0x1aa230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100690u, 0x1AA22Cu, 0x1AA234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA234u;
}
