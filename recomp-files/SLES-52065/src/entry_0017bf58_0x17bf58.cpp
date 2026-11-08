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

// Function: entry_0017bf58
// Address: 0x17bf58 - 0x17bf88
void entry_0017bf58_0x17bf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf58_0x17bf58");
#endif

    switch (ctx->pc) {
        case 0x17bf7cu: goto label_17bf7c;
        default: break;
    }

    ctx->pc = 0x17bf58u;

    // 0x17bf58: 0x8e230230  lw          $v1, 0x230($s1)
    ctx->pc = 0x17bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x17bf5c: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17BF5Cu;
    {
        const bool branch_taken_0x17bf5c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x17bf5c) {
            ctx->pc = 0x17BF88u;
            return;
        }
    }
    ctx->pc = 0x17BF64u;
    // 0x17bf64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x17bf68: 0xae300230  sw          $s0, 0x230($s1)
    ctx->pc = 0x17bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 16));
    // 0x17bf6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17bf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x17bf70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17bf74: 0xc0425a4  jal         func_109690
    ctx->pc = 0x17BF74u;
    SET_GPR_U32(ctx, 31, 0x17BF7Cu);
    ctx->pc = 0x17BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF74u;
    // 0x17bf78: 0xa22501f9  sb          $a1, 0x1F9($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 505), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x17BF74u, 0x17BF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF7Cu;
label_17bf7c:
    // 0x17bf7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17bf7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf80: 0xc042118  jal         func_108460
    ctx->pc = 0x17BF80u;
    SET_GPR_U32(ctx, 31, 0x17BF88u);
    ctx->pc = 0x17BF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF80u;
    // 0x17bf84: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x17BF80u, 0x17BF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF88u;
}
