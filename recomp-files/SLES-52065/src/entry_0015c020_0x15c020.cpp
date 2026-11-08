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

// Function: entry_0015c020
// Address: 0x15c020 - 0x15c060
void entry_0015c020_0x15c020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c020_0x15c020");
#endif

    ctx->pc = 0x15c020u;

    // 0x15c020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15c020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15c024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15c024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15c028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15c028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15c02c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15c02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15c030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15c030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c034: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x15C034u;
    {
        const bool branch_taken_0x15c034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C034u;
        // 0x15c038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c034) {
            ctx->pc = 0x15C078u;
            return;
        }
    }
    ctx->pc = 0x15C03Cu;
    // 0x15c03c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15c040: 0x24429950  addiu       $v0, $v0, -0x66B0
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941008));
    // 0x15c044: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15C044u;
    {
        const bool branch_taken_0x15c044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C044u;
        // 0x15c048: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c044) {
            ctx->pc = 0x15C060u;
            return;
        }
    }
    ctx->pc = 0x15C04Cu;
    // 0x15c04c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x15c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x15c050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15c050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c054: 0x244298f0  addiu       $v0, $v0, -0x6710
    ctx->pc = 0x15c054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
    // 0x15c058: 0xc04187c  jal         func_1061F0
    ctx->pc = 0x15C058u;
    SET_GPR_U32(ctx, 31, 0x15C060u);
    ctx->pc = 0x15C05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C058u;
    // 0x15c05c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1061F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061F0u, 0x15C058u, 0x15C060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C060u;
}
