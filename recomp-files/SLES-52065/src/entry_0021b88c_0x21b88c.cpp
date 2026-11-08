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

// Function: entry_0021b88c
// Address: 0x21b88c - 0x21b8d0
void entry_0021b88c_0x21b88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b88c_0x21b88c");
#endif

    switch (ctx->pc) {
        case 0x21b8bcu: goto label_21b8bc;
        default: break;
    }

    ctx->pc = 0x21b88cu;

    // 0x21b88c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x21b88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b890: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x21b890u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b894: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x21b894u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
    // 0x21b898: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x21b898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x21b89c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b89cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21b8a0: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x21b8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x21b8a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21b8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b8a8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x21b8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21b8ac: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x21b8acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x21b8b0: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x21b8b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x21b8b4: 0xc01d9a0  jal         func_076680
    ctx->pc = 0x21B8B4u;
    SET_GPR_U32(ctx, 31, 0x21B8BCu);
    ctx->pc = 0x21B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B8B4u;
    // 0x21b8b8: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76680u, 0x21B8B4u, 0x21B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B8BCu;
label_21b8bc:
    // 0x21b8bc: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x21b8bcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b8c0: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x21b8c4: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x21B8C4u;
    {
        const bool branch_taken_0x21b8c4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x21B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B8C4u;
        // 0x21b8c8: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b8c4) {
            ctx->pc = 0x21B7D0u;
            return;
        }
    }
    ctx->pc = 0x21B8CCu;
    // 0x21b8cc: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    ctx->pc = 0x21b8d0u;
}
