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

// Function: entry_00195ae8
// Address: 0x195ae8 - 0x195b1c
void entry_00195ae8_0x195ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00195ae8_0x195ae8");
#endif

    switch (ctx->pc) {
        case 0x195b14u: goto label_195b14;
        default: break;
    }

    ctx->pc = 0x195ae8u;

    // 0x195ae8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x195ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195aec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x195aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x195af0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195af4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x195af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195af8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x195af8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195afc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x195afcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x195b00: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x195b00u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x195b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x195b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b0c: 0xc04bce0  jal         func_12F380
    ctx->pc = 0x195B0Cu;
    SET_GPR_U32(ctx, 31, 0x195B14u);
    ctx->pc = 0x195B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195B0Cu;
    // 0x195b10: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F380u, 0x195B0Cu, 0x195B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B14u;
label_195b14:
    // 0x195b14: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x195B14u;
    {
        const bool branch_taken_0x195b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b14) {
            ctx->pc = 0x195D64u;
            return;
        }
    }
    ctx->pc = 0x195B1Cu;
}
