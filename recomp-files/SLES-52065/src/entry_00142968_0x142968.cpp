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

// Function: entry_00142968
// Address: 0x142968 - 0x1429a8
void entry_00142968_0x142968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142968_0x142968");
#endif

    switch (ctx->pc) {
        case 0x14298cu: goto label_14298c;
        default: break;
    }

    ctx->pc = 0x142968u;

    // 0x142968: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x142968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x14296c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x14296Cu;
    {
        const bool branch_taken_0x14296c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14296c) {
            ctx->pc = 0x1429A8u;
            return;
        }
    }
    ctx->pc = 0x142974u;
    // 0x142974: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142978: 0x139140  sll         $s2, $s3, 5
    ctx->pc = 0x142978u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x14297c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x14297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x142980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x142980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142984: 0xc04c730  jal         func_131CC0
    ctx->pc = 0x142984u;
    SET_GPR_U32(ctx, 31, 0x14298Cu);
    ctx->pc = 0x142988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142984u;
    // 0x142988: 0xc44c007c  lwc1        $f12, 0x7C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x131CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131CC0u, 0x142984u, 0x14298Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14298Cu;
label_14298c:
    // 0x14298c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x14298cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x142990: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x142990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x142994: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x142994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x142998: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x142998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14299c: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1429a0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1429a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1429a4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x1429a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1429a8u;
}
