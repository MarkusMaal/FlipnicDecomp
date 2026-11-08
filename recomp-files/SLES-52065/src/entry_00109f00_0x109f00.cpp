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

// Function: entry_00109f00
// Address: 0x109f00 - 0x109f58
void entry_00109f00_0x109f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109f00_0x109f00");
#endif

    switch (ctx->pc) {
        case 0x109f0cu: goto label_109f0c;
        case 0x109f50u: goto label_109f50;
        default: break;
    }

    ctx->pc = 0x109f00u;

    // 0x109f00: 0x8f848218  lw          $a0, -0x7DE8($gp)
    ctx->pc = 0x109f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109f04: 0xc058080  jal         func_160200
    ctx->pc = 0x109F04u;
    SET_GPR_U32(ctx, 31, 0x109F0Cu);
    ctx->pc = 0x109F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F04u;
    // 0x109f08: 0x8c912cd0  lw          $s1, 0x2CD0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11472)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160200u, 0x109F04u, 0x109F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F0Cu;
label_109f0c:
    // 0x109f0c: 0x8f858218  lw          $a1, -0x7DE8($gp)
    ctx->pc = 0x109f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x109f10: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x109f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x109f14: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x109f14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x109f18: 0x132100  sll         $a0, $s3, 4
    ctx->pc = 0x109f18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    // 0x109f1c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x109f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x109f20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109f24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x109f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x109f28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x109f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x109f2c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x109f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x109f30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x109f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x109f34: 0x8c632cd8  lw          $v1, 0x2CD8($v1)
    ctx->pc = 0x109f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11480)));
    // 0x109f38: 0x8c6301f0  lw          $v1, 0x1F0($v1)
    ctx->pc = 0x109f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 496)));
    // 0x109f3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x109f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x109f40: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x109f40u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109f44: 0x7c460040  sq          $a2, 0x40($v0)
    ctx->pc = 0x109f44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 6));
    // 0x109f48: 0xc04043c  jal         func_1010F0
    ctx->pc = 0x109F48u;
    SET_GPR_U32(ctx, 31, 0x109F50u);
    ctx->pc = 0x109F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F48u;
    // 0x109f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1010F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1010F0u, 0x109F48u, 0x109F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F50u;
label_109f50:
    // 0x109f50: 0x100000a7  b           . + 4 + (0xA7 << 2)
    ctx->pc = 0x109F50u;
    {
        const bool branch_taken_0x109f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109f50) {
            ctx->pc = 0x10A1F0u;
            return;
        }
    }
    ctx->pc = 0x109F58u;
}
