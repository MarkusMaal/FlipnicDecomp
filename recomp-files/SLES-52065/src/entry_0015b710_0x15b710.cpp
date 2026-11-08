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

// Function: entry_0015b710
// Address: 0x15b710 - 0x15b770
void entry_0015b710_0x15b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b710_0x15b710");
#endif

    switch (ctx->pc) {
        case 0x15b764u: goto label_15b764;
        default: break;
    }

    ctx->pc = 0x15b710u;

    // 0x15b710: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15B710u;
    {
        const bool branch_taken_0x15b710 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x15b710) {
            ctx->pc = 0x15B778u;
            return;
        }
    }
    ctx->pc = 0x15B718u;
    // 0x15b718: 0x8e2201d4  lw          $v0, 0x1D4($s1)
    ctx->pc = 0x15b718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15b71c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15b720: 0xae2201d4  sw          $v0, 0x1D4($s1)
    ctx->pc = 0x15b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 468), GPR_U32(ctx, 2));
    // 0x15b724: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x15b724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15b728: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x15b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x15b72c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x15b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15b730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15b730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15b734: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15b734u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15b738: 0x0  nop
    ctx->pc = 0x15b738u;
    // NOP
    // 0x15b73c: 0x0  nop
    ctx->pc = 0x15b73cu;
    // NOP
    // 0x15b740: 0x1010  mfhi        $v0
    ctx->pc = 0x15b740u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x15b744: 0xa082002b  sb          $v0, 0x2B($a0)
    ctx->pc = 0x15b744u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b748: 0x8e2301d4  lw          $v1, 0x1D4($s1)
    ctx->pc = 0x15b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 468)));
    // 0x15b74c: 0x8e220220  lw          $v0, 0x220($s1)
    ctx->pc = 0x15b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x15b750: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x15B750u;
    {
        const bool branch_taken_0x15b750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15B754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15B750u;
        // 0x15b754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b750) {
            ctx->pc = 0x15B770u;
            return;
        }
    }
    ctx->pc = 0x15B758u;
    // 0x15b758: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15b758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b75c: 0xc042570  jal         func_1095C0
    ctx->pc = 0x15B75Cu;
    SET_GPR_U32(ctx, 31, 0x15B764u);
    ctx->pc = 0x15B760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15B75Cu;
    // 0x15b760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095C0u, 0x15B75Cu, 0x15B764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B764u;
label_15b764:
    // 0x15b764: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b768: 0xa22201d3  sb          $v0, 0x1D3($s1)
    ctx->pc = 0x15b768u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 467), (uint8_t)GPR_U32(ctx, 2));
    // 0x15b76c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x15b770u;
}
