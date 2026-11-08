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

// Function: entry_00152bd4
// Address: 0x152bd4 - 0x152c0c
void entry_00152bd4_0x152bd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152bd4_0x152bd4");
#endif

    switch (ctx->pc) {
        case 0x152bf8u: goto label_152bf8;
        default: break;
    }

    ctx->pc = 0x152bd4u;

    // 0x152bd4: 0x26c80010  addiu       $t0, $s6, 0x10
    ctx->pc = 0x152bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x152bd8: 0x26c70020  addiu       $a3, $s6, 0x20
    ctx->pc = 0x152bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x152bdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x152bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x152be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x152be4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152be8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x152be8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152bec: 0x26d60060  addiu       $s6, $s6, 0x60
    ctx->pc = 0x152becu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 96));
    // 0x152bf0: 0xc0558bc  jal         func_1562F0
    ctx->pc = 0x152BF0u;
    SET_GPR_U32(ctx, 31, 0x152BF8u);
    ctx->pc = 0x152BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152BF0u;
    // 0x152bf4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562F0u, 0x152BF0u, 0x152BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BF8u;
label_152bf8:
    // 0x152bf8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x152bf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x152bfc: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x152BFCu;
    {
        const bool branch_taken_0x152bfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x152bfc) {
            ctx->pc = 0x152C0Cu;
            return;
        }
    }
    ctx->pc = 0x152C04u;
    // 0x152c04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x152C04u;
    {
        const bool branch_taken_0x152c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C04u;
        // 0x152c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152c04) {
            ctx->pc = 0x152C24u;
            return;
        }
    }
    ctx->pc = 0x152C0Cu;
}
