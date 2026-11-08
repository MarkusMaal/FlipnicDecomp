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

// Function: entry_001e3164
// Address: 0x1e3164 - 0x1e31a8
void entry_001e3164_0x1e3164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3164_0x1e3164");
#endif

    ctx->pc = 0x1e3164u;

    // 0x1e3164: 0x8fc40074  lw          $a0, 0x74($fp)
    ctx->pc = 0x1e3164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x1e3168: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e316c: 0x9062003a  lbu         $v0, 0x3A($v1)
    ctx->pc = 0x1e316cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 58)));
    // 0x1e3170: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x1e3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
    // 0x1e3174: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e3174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e3178: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3178u;
    {
        const bool branch_taken_0x1e3178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3178u;
        // 0x1e317c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3178) {
            ctx->pc = 0x1E31ACu;
            return;
        }
    }
    ctx->pc = 0x1E3180u;
    // 0x1e3180: 0x94620038  lhu         $v0, 0x38($v1)
    ctx->pc = 0x1e3180u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1e3184: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1e3184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1e3188: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1e3188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1e318c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E318Cu;
    {
        const bool branch_taken_0x1e318c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e318c) {
            ctx->pc = 0x1E31A8u;
            return;
        }
    }
    ctx->pc = 0x1E3194u;
    // 0x1e3194: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1e3194u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1e3198: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3198u;
    {
        const bool branch_taken_0x1e3198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3198) {
            ctx->pc = 0x1E31A8u;
            return;
        }
    }
    ctx->pc = 0x1E31A0u;
    // 0x1e31a0: 0xc078bfc  jal         func_1E2FF0
    ctx->pc = 0x1E31A0u;
    SET_GPR_U32(ctx, 31, 0x1E31A8u);
    ctx->pc = 0x1E2FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2FF0u, 0x1E31A0u, 0x1E31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E31A8u;
}
