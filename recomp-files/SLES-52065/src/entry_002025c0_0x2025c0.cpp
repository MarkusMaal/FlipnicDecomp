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

// Function: entry_002025c0
// Address: 0x2025c0 - 0x2025f8
void entry_002025c0_0x2025c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002025c0_0x2025c0");
#endif

    ctx->pc = 0x2025c0u;

label_2025c0:
    // 0x2025c0: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x2025c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x2025c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2025C4u;
    {
        const bool branch_taken_0x2025c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C4u;
        // 0x2025c8: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c4) {
            ctx->pc = 0x2025F8u;
            return;
        }
    }
    ctx->pc = 0x2025CCu;
    // 0x2025cc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2025ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2025d0: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x2025d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x2025d4: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2025d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2025d8: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2025d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2025dc: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x2025dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x2025e0: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x2025e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2025e4: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x2025e4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x2025e8: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x2025e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2025ec: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2025ECu;
    {
        const bool branch_taken_0x2025ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2025F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025ECu;
        // 0x2025f0: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025ec) {
            ctx->pc = 0x2025C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2025c0;
        }
    }
    ctx->pc = 0x2025F4u;
    // 0x2025f4: 0x0  nop
    ctx->pc = 0x2025f4u;
    // NOP
    ctx->pc = 0x2025f8u;
}
