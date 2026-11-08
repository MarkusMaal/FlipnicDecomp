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

// Function: entry_0018e668
// Address: 0x18e668 - 0x18e698
void entry_0018e668_0x18e668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e668_0x18e668");
#endif

    switch (ctx->pc) {
        case 0x18e690u: goto label_18e690;
        default: break;
    }

    ctx->pc = 0x18e668u;

    // 0x18e668: 0x8e420478  lw          $v0, 0x478($s2)
    ctx->pc = 0x18e668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1144)));
    // 0x18e66c: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x18e66cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18e670: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x18E670u;
    {
        const bool branch_taken_0x18e670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E670u;
        // 0x18e674: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e670) {
            ctx->pc = 0x18E698u;
            return;
        }
    }
    ctx->pc = 0x18E678u;
    // 0x18e678: 0xae400478  sw          $zero, 0x478($s2)
    ctx->pc = 0x18e678u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1144), GPR_U32(ctx, 0));
    // 0x18e67c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x18e67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18e680: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x18e684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18e688: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18E688u;
    SET_GPR_U32(ctx, 31, 0x18E690u);
    ctx->pc = 0x18E68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E688u;
    // 0x18e68c: 0xae422720  sw          $v0, 0x2720($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10016), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E688u, 0x18E690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E690u;
label_18e690:
    // 0x18e690: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x18E690u;
    {
        const bool branch_taken_0x18e690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e690) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E698u;
}
