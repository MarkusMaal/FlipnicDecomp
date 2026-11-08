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

// Function: entry_0018e490
// Address: 0x18e490 - 0x18e4c0
void entry_0018e490_0x18e490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e490_0x18e490");
#endif

    switch (ctx->pc) {
        case 0x18e4b8u: goto label_18e4b8;
        default: break;
    }

    ctx->pc = 0x18e490u;

    // 0x18e490: 0xae40045c  sw          $zero, 0x45C($s2)
    ctx->pc = 0x18e490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1116), GPR_U32(ctx, 0));
    // 0x18e494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18e494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e498: 0xae400460  sw          $zero, 0x460($s2)
    ctx->pc = 0x18e498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1120), GPR_U32(ctx, 0));
    // 0x18e49c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18e49cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18e4a0: 0xae400464  sw          $zero, 0x464($s2)
    ctx->pc = 0x18e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1124), GPR_U32(ctx, 0));
    // 0x18e4a4: 0xae40046c  sw          $zero, 0x46C($s2)
    ctx->pc = 0x18e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1132), GPR_U32(ctx, 0));
    // 0x18e4a8: 0xae400468  sw          $zero, 0x468($s2)
    ctx->pc = 0x18e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1128), GPR_U32(ctx, 0));
    // 0x18e4ac: 0xae402714  sw          $zero, 0x2714($s2)
    ctx->pc = 0x18e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 10004), GPR_U32(ctx, 0));
    // 0x18e4b0: 0xc063e08  jal         func_18F820
    ctx->pc = 0x18E4B0u;
    SET_GPR_U32(ctx, 31, 0x18E4B8u);
    ctx->pc = 0x18E4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E4B0u;
    // 0x18e4b4: 0xae402710  sw          $zero, 0x2710($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 10000), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F820u, 0x18E4B0u, 0x18E4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E4B8u;
label_18e4b8:
    // 0x18e4b8: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x18E4B8u;
    {
        const bool branch_taken_0x18e4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e4b8) {
            ctx->pc = 0x18E6F0u;
            return;
        }
    }
    ctx->pc = 0x18E4C0u;
}
