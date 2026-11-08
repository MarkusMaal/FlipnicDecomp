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

// Function: entry_0016912c
// Address: 0x16912c - 0x169164
void entry_0016912c_0x16912c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016912c_0x16912c");
#endif

    switch (ctx->pc) {
        case 0x169138u: goto label_169138;
        case 0x169144u: goto label_169144;
        default: break;
    }

    ctx->pc = 0x16912cu;

    // 0x16912c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16912cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169130: 0xc056194  jal         func_158650
    ctx->pc = 0x169130u;
    SET_GPR_U32(ctx, 31, 0x169138u);
    ctx->pc = 0x169134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169130u;
    // 0x169134: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158650u, 0x169130u, 0x169138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169138u;
label_169138:
    // 0x169138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x169138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16913c: 0xc042118  jal         func_108460
    ctx->pc = 0x16913Cu;
    SET_GPR_U32(ctx, 31, 0x169144u);
    ctx->pc = 0x169140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16913Cu;
    // 0x169140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108460u, 0x16913Cu, 0x169144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169144u;
label_169144:
    // 0x169144: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x169144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x169148: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x169148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16914c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169150: 0xa48001e8  sh          $zero, 0x1E8($a0)
    ctx->pc = 0x169150u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 488), (uint16_t)GPR_U32(ctx, 0));
    // 0x169154: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x169154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x169158: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x169158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x16915c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16915Cu;
    {
        const bool branch_taken_0x16915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16915Cu;
        // 0x169160: 0xae000230  sw          $zero, 0x230($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16915c) {
            ctx->pc = 0x16919Cu;
            return;
        }
    }
    ctx->pc = 0x169164u;
}
