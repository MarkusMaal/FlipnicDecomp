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

// Function: entry_001d91b4
// Address: 0x1d91b4 - 0x1d9204
void entry_001d91b4_0x1d91b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d91b4_0x1d91b4");
#endif

    ctx->pc = 0x1d91b4u;

    // 0x1d91b4: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1d91b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d91b8: 0x1135003c  beq         $t1, $s5, . + 4 + (0x3C << 2)
    ctx->pc = 0x1D91B8u;
    {
        const bool branch_taken_0x1d91b8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D91BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91B8u;
        // 0x1d91bc: 0x2411fffd  addiu       $s1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91b8) {
            ctx->pc = 0x1D92ACu;
            return;
        }
    }
    ctx->pc = 0x1D91C0u;
    // 0x1d91c0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x1d91c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91c4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1d91c8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1d91c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d91cc: 0x258466c0  addiu       $a0, $t4, 0x66C0
    ctx->pc = 0x1d91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 26304));
    // 0x1d91d0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1d91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1d91d4: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x1d91d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x1d91d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d91dc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D91DCu;
    {
        const bool branch_taken_0x1d91dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91DCu;
        // 0x1d91e0: 0x648021  addu        $s0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91dc) {
            ctx->pc = 0x1D9204u;
            return;
        }
    }
    ctx->pc = 0x1D91E4u;
    // 0x1d91e4: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1d91e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1d91e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1d91ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1d91f0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1d91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1d91f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d91f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d91f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d91f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d91fc: 0xc0765c4  jal         func_1D9710
    ctx->pc = 0x1D91FCu;
    SET_GPR_U32(ctx, 31, 0x1D9204u);
    ctx->pc = 0x1D9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91FCu;
    // 0x1d9200: 0x2429024  and         $s2, $s2, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9710u, 0x1D91FCu, 0x1D9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9204u;
}
