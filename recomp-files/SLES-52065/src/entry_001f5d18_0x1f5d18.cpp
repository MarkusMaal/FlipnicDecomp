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

// Function: entry_001f5d18
// Address: 0x1f5d18 - 0x1f5d94
void entry_001f5d18_0x1f5d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5d18_0x1f5d18");
#endif

    switch (ctx->pc) {
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d8cu: goto label_1f5d8c;
        default: break;
    }

    ctx->pc = 0x1f5d18u;

label_1f5d18:
    // 0x1f5d18: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x1f5d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x1f5d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f5d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d20: 0xa2160070  sb          $s6, 0x70($s0)
    ctx->pc = 0x1f5d20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 22));
    // 0x1f5d24: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1f5d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1f5d28: 0xa2150071  sb          $s5, 0x71($s0)
    ctx->pc = 0x1f5d28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 21));
    // 0x1f5d2c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1f5d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1f5d30: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x1f5d30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f5d34: 0xc07fe6c  jal         func_1FF9B0
    ctx->pc = 0x1F5D34u;
    SET_GPR_U32(ctx, 31, 0x1F5D3Cu);
    ctx->pc = 0x1F5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D34u;
    // 0x1f5d38: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF9B0u, 0x1F5D34u, 0x1F5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D3Cu;
label_1f5d3c:
    // 0x1f5d3c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1f5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1f5d40: 0x621fff5  bgez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F5D40u;
    {
        const bool branch_taken_0x1f5d40 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1F5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D40u;
        // 0x1f5d44: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d40) {
            ctx->pc = 0x1F5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5d18;
        }
    }
    ctx->pc = 0x1F5D48u;
    // 0x1f5d48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f5d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d4c: 0x26f012c0  addiu       $s0, $s7, 0x12C0
    ctx->pc = 0x1f5d4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4800));
    // 0x1f5d50: 0xaef112c0  sw          $s1, 0x12C0($s7)
    ctx->pc = 0x1f5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4800), GPR_U32(ctx, 17));
    // 0x1f5d54: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f5d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f5d58: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1f5d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1f5d5c: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1f5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
    // 0x1f5d60: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x1f5d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x1f5d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d68: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x1f5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x1f5d6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f5d6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d70: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1f5d70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1f5d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1f5d78: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x1f5d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5d7c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f5d7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5d80: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1f5d80u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f5d84: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F5D84u;
    SET_GPR_U32(ctx, 31, 0x1F5D8Cu);
    ctx->pc = 0x1F5D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5D84u;
    // 0x1f5d88: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F5D84u, 0x1F5D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5D8Cu;
label_1f5d8c:
    // 0x1f5d8c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5D8Cu;
    {
        const bool branch_taken_0x1f5d8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F5D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D8Cu;
        // 0x1f5d90: 0x2403001c  addiu       $v1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d8c) {
            ctx->pc = 0x1F5D9Cu;
            return;
        }
    }
    ctx->pc = 0x1F5D94u;
}
