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

// Function: entry_001e04a8
// Address: 0x1e04a8 - 0x1e04f0
void entry_001e04a8_0x1e04a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e04a8_0x1e04a8");
#endif

    ctx->pc = 0x1e04a8u;

    // 0x1e04a8: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E04A8u;
    {
        const bool branch_taken_0x1e04a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04A8u;
        // 0x1e04ac: 0x3c030039  lui         $v1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04a8) {
            ctx->pc = 0x1E051Cu;
            return;
        }
    }
    ctx->pc = 0x1E04B0u;
    // 0x1e04b0: 0x92040068  lbu         $a0, 0x68($s0)
    ctx->pc = 0x1e04b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1e04b4: 0x2463ab14  addiu       $v1, $v1, -0x54EC
    ctx->pc = 0x1e04b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945556));
    // 0x1e04b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e04b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e04bc: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1E04BCu;
    {
        const bool branch_taken_0x1e04bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1E04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04BCu;
        // 0x1e04c0: 0x3c050039  lui         $a1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04bc) {
            ctx->pc = 0x1E04F0u;
            return;
        }
    }
    ctx->pc = 0x1E04C4u;
    // 0x1e04c4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e04c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e04c8: 0x24a3ab10  addiu       $v1, $a1, -0x54F0
    ctx->pc = 0x1e04c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945552));
    // 0x1e04cc: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1e04ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1e04d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e04d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e04d4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e04d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e04d8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1e04d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1e04dc: 0xa024a310  sb          $a0, -0x5CF0($at)
    ctx->pc = 0x1e04dcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294943504), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e04e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e04e4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E04E4u;
    {
        const bool branch_taken_0x1e04e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E04E4u;
        // 0x1e04e8: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e04e4) {
            ctx->pc = 0x1E04F4u;
            return;
        }
    }
    ctx->pc = 0x1E04ECu;
    // 0x1e04ec: 0x0  nop
    ctx->pc = 0x1e04ecu;
    // NOP
    ctx->pc = 0x1e04f0u;
}
