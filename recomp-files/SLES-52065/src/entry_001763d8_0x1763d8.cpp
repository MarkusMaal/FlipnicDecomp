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

// Function: entry_001763d8
// Address: 0x1763d8 - 0x17640c
void entry_001763d8_0x1763d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001763d8_0x1763d8");
#endif

    ctx->pc = 0x1763d8u;

    // 0x1763d8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1763d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1763dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1763dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1763e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1763e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1763e4: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x1763e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1763e8: 0x9062004c  lbu         $v0, 0x4C($v1)
    ctx->pc = 0x1763e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1763ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1763ECu;
    {
        const bool branch_taken_0x1763ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1763ec) {
            ctx->pc = 0x176414u;
            return;
        }
    }
    ctx->pc = 0x1763F4u;
    // 0x1763f4: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x1763f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1763f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1763f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1763fc: 0x0  nop
    ctx->pc = 0x1763fcu;
    // NOP
    // 0x176400: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x176400u;
    {
        const bool branch_taken_0x176400 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x176404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176400u;
        // 0x176404: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176400) {
            ctx->pc = 0x17640Cu;
            return;
        }
    }
    ctx->pc = 0x176408u;
    // 0x176408: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17640cu;
}
