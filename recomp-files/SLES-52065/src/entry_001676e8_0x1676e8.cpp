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

// Function: entry_001676e8
// Address: 0x1676e8 - 0x167708
void entry_001676e8_0x1676e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001676e8_0x1676e8");
#endif

    ctx->pc = 0x1676e8u;

    // 0x1676e8: 0x86230226  lh          $v1, 0x226($s1)
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 550)));
    // 0x1676ec: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1676ECu;
    {
        const bool branch_taken_0x1676ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1676ec) {
            ctx->pc = 0x167708u;
            return;
        }
    }
    ctx->pc = 0x1676F4u;
    // 0x1676f4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1676f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1676f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1676f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1676fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1676fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x167700: 0xc0425a4  jal         func_109690
    ctx->pc = 0x167700u;
    SET_GPR_U32(ctx, 31, 0x167708u);
    ctx->pc = 0x167704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167700u;
    // 0x167704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109690u, 0x167700u, 0x167708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167708u;
}
