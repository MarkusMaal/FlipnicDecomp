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

// Function: entry_0015ca00
// Address: 0x15ca00 - 0x15ca30
void entry_0015ca00_0x15ca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ca00_0x15ca00");
#endif

    ctx->pc = 0x15ca00u;

label_15ca00:
    // 0x15ca00: 0x2b11821  addu        $v1, $s5, $s1
    ctx->pc = 0x15ca00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_15ca04:
    // 0x15ca04: 0x8c643cd8  lw          $a0, 0x3CD8($v1)
    ctx->pc = 0x15ca04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15576)));
label_15ca08:
    // 0x15ca08: 0x908301d3  lbu         $v1, 0x1D3($a0)
    ctx->pc = 0x15ca08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 467)));
label_15ca0c:
    // 0x15ca0c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_15ca10:
    if (ctx->pc == 0x15CA10u) {
        ctx->pc = 0x15CA14u;
        goto label_15ca14;
    }
    ctx->pc = 0x15CA0Cu;
    {
        const bool branch_taken_0x15ca0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca0c) {
            ctx->pc = 0x15CA30u;
            return;
        }
    }
    ctx->pc = 0x15CA14u;
label_15ca14:
    // 0x15ca14: 0x908301f9  lbu         $v1, 0x1F9($a0)
    ctx->pc = 0x15ca14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 505)));
label_15ca18:
    // 0x15ca18: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_15ca1c:
    if (ctx->pc == 0x15CA1Cu) {
        ctx->pc = 0x15CA20u;
        goto label_15ca20;
    }
    ctx->pc = 0x15CA18u;
    {
        const bool branch_taken_0x15ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ca18) {
            ctx->pc = 0x15CA30u;
            return;
        }
    }
    ctx->pc = 0x15CA20u;
label_15ca20:
    // 0x15ca20: 0x8c990008  lw          $t9, 0x8($a0)
    ctx->pc = 0x15ca20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_15ca24:
    // 0x15ca24: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x15ca24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_15ca28:
    // 0x15ca28: 0x320f809  jalr        $t9
label_15ca2c:
    if (ctx->pc == 0x15CA2Cu) {
        ctx->pc = 0x15CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA28u;
        // 0x15ca2c: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CA30u;
        goto label_fallthrough_0x15ca28;
    }
    ctx->pc = 0x15CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x15CA30u);
        ctx->pc = 0x15CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CA28u;
        // 0x15ca2c: 0x8fa500ac  lw          $a1, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CA28u, 0x15CA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x15ca28:
    ctx->pc = 0x15CA30u;
}
