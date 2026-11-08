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

// Function: entry_001d19d0
// Address: 0x1d19d0 - 0x1d1a1c
void entry_001d19d0_0x1d19d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d19d0_0x1d19d0");
#endif

    ctx->pc = 0x1d19d0u;

label_1d19d0:
    // 0x1d19d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d19d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d19d4:
    // 0x1d19d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d19d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d19d8:
    // 0x1d19d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d19d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d19dc:
    // 0x1d19dc: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x1d19dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_1d19e0:
    // 0x1d19e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d19e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1d19e4:
    // 0x1d19e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d19e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d19e8:
    // 0x1d19e8: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1d19e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d19ec:
    // 0x1d19ec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1d19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1d19f0:
    // 0x1d19f0: 0x20630008  addi        $v1, $v1, 0x8
    ctx->pc = 0x1d19f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)8, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_1d19f4:
    // 0x1d19f4: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x1d19f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1d19f8:
    // 0x1d19f8: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_1d19fc:
    if (ctx->pc == 0x1D19FCu) {
        ctx->pc = 0x1D1A00u;
        goto label_1d1a00;
    }
    ctx->pc = 0x1D19F8u;
    {
        const bool branch_taken_0x1d19f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d19f8) {
            ctx->pc = 0x1D1A24u;
            return;
        }
    }
    ctx->pc = 0x1D1A00u;
label_1d1a00:
    // 0x1d1a00: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1d1a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
label_1d1a04:
    // 0x1d1a04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d1a08:
    // 0x1d1a08: 0x248434d0  addiu       $a0, $a0, 0x34D0
    ctx->pc = 0x1d1a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13520));
label_1d1a0c:
    // 0x1d1a0c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d1a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d1a10:
    // 0x1d1a10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d1a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d1a14:
    // 0x1d1a14: 0x600008  jr          $v1
label_1d1a18:
    if (ctx->pc == 0x1D1A18u) {
        ctx->pc = 0x1D1A1Cu;
        goto label_fallthrough_0x1d1a14;
    }
    ctx->pc = 0x1D1A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1A14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1d1a14:
    ctx->pc = 0x1D1A1Cu;
}
