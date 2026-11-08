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

// Function: entry_00106d00
// Address: 0x106d00 - 0x106d60
void entry_00106d00_0x106d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106d00_0x106d00");
#endif

    ctx->pc = 0x106d00u;

    // 0x106d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x106d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x106d04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x106d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x106d08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x106d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x106d0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106d10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106d10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d14: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x106D14u;
    {
        const bool branch_taken_0x106d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D14u;
        // 0x106d18: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d14) {
            ctx->pc = 0x106D78u;
            return;
        }
    }
    ctx->pc = 0x106D1Cu;
    // 0x106d1c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106d20: 0x24427ed0  addiu       $v0, $v0, 0x7ED0
    ctx->pc = 0x106d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32464));
    // 0x106d24: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x106D24u;
    {
        const bool branch_taken_0x106d24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D24u;
        // 0x106d28: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d24) {
            ctx->pc = 0x106D60u;
            return;
        }
    }
    ctx->pc = 0x106D2Cu;
    // 0x106d2c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106d30: 0x24429770  addiu       $v0, $v0, -0x6890
    ctx->pc = 0x106d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940528));
    // 0x106d34: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x106D34u;
    {
        const bool branch_taken_0x106d34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D34u;
        // 0x106d38: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d34) {
            ctx->pc = 0x106D60u;
            return;
        }
    }
    ctx->pc = 0x106D3Cu;
    // 0x106d3c: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x106d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x106d40: 0x24427f90  addiu       $v0, $v0, 0x7F90
    ctx->pc = 0x106d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32656));
    // 0x106d44: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x106D44u;
    {
        const bool branch_taken_0x106d44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x106D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106D44u;
        // 0x106d48: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106d44) {
            ctx->pc = 0x106D60u;
            return;
        }
    }
    ctx->pc = 0x106D4Cu;
    // 0x106d4c: 0x3c020023  lui         $v0, 0x23
    ctx->pc = 0x106d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)35 << 16));
    // 0x106d50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x106d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d54: 0x244297d0  addiu       $v0, $v0, -0x6830
    ctx->pc = 0x106d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940624));
    // 0x106d58: 0xc0416c8  jal         func_105B20
    ctx->pc = 0x106D58u;
    SET_GPR_U32(ctx, 31, 0x106D60u);
    ctx->pc = 0x106D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106D58u;
    // 0x106d5c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B20u, 0x106D58u, 0x106D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106D60u;
}
