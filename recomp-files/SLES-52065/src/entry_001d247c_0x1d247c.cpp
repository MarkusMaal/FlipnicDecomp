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

// Function: entry_001d247c
// Address: 0x1d247c - 0x1d24b8
void entry_001d247c_0x1d247c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d247c_0x1d247c");
#endif

    ctx->pc = 0x1d247cu;

label_1d247c:
    // 0x1d247c: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x1d247cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_1d2480:
    // 0x1d2480: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d2484:
    // 0x1d2484: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d2484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_1d2488:
    // 0x1d2488: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x1d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
label_1d248c:
    // 0x1d248c: 0x8c25fef0  lw          $a1, -0x110($at)
    ctx->pc = 0x1d248cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967024)));
label_1d2490:
    // 0x1d2490: 0x2ca1000a  sltiu       $at, $a1, 0xA
    ctx->pc = 0x1d2490u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1d2494:
    // 0x1d2494: 0x102000a5  beqz        $at, . + 4 + (0xA5 << 2)
label_1d2498:
    if (ctx->pc == 0x1D2498u) {
        ctx->pc = 0x1D249Cu;
        goto label_1d249c;
    }
    ctx->pc = 0x1D2494u;
    {
        const bool branch_taken_0x1d2494 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2494) {
            ctx->pc = 0x1D272Cu;
            return;
        }
    }
    ctx->pc = 0x1D249Cu;
label_1d249c:
    // 0x1d249c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d249cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1d24a0:
    // 0x1d24a0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d24a4:
    // 0x1d24a4: 0x24843560  addiu       $a0, $a0, 0x3560
    ctx->pc = 0x1d24a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13664));
label_1d24a8:
    // 0x1d24a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d24a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d24ac:
    // 0x1d24ac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d24acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d24b0:
    // 0x1d24b0: 0x600008  jr          $v1
label_1d24b4:
    if (ctx->pc == 0x1D24B4u) {
        ctx->pc = 0x1D24B8u;
        goto label_fallthrough_0x1d24b0;
    }
    ctx->pc = 0x1D24B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D24B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1d24b0:
    ctx->pc = 0x1D24B8u;
}
