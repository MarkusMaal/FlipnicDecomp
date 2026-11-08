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

// Function: entry_00194ea0
// Address: 0x194ea0 - 0x194ec8
void entry_00194ea0_0x194ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194ea0_0x194ea0");
#endif

    ctx->pc = 0x194ea0u;

    // 0x194ea0: 0x8f828714  lw          $v0, -0x78EC($gp)
    ctx->pc = 0x194ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936340)));
    // 0x194ea4: 0x8f858384  lw          $a1, -0x7C7C($gp)
    ctx->pc = 0x194ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935428)));
    // 0x194ea8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x194ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x194eac: 0x8c4428dc  lw          $a0, 0x28DC($v0)
    ctx->pc = 0x194eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10460)));
    // 0x194eb0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x194eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x194eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194EB8u;
    {
        const bool branch_taken_0x194eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194EB8u;
        // 0x194ebc: 0x24460018  addiu       $a2, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194eb8) {
            ctx->pc = 0x194EC8u;
            return;
        }
    }
    ctx->pc = 0x194EC0u;
    // 0x194ec0: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x194ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x194ec4: 0xac020000  sw          $v0, 0x0($zero)
    ctx->pc = 0x194ec4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x0u, _value); } while (0);
    ctx->pc = 0x194ec8u;
}
