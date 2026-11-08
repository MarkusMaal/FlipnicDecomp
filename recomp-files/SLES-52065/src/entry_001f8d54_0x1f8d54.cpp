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

// Function: entry_001f8d54
// Address: 0x1f8d54 - 0x1f8dc4
void entry_001f8d54_0x1f8d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8d54_0x1f8d54");
#endif

    switch (ctx->pc) {
        case 0x1f8d7cu: goto label_1f8d7c;
        case 0x1f8dacu: goto label_1f8dac;
        default: break;
    }

    ctx->pc = 0x1f8d54u;

    // 0x1f8d54: 0x24901b00  addiu       $s0, $a0, 0x1B00
    ctx->pc = 0x1f8d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 6912));
    // 0x1f8d58: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f8d5c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f8d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8d60: 0x3c060039  lui         $a2, 0x39
    ctx->pc = 0x1f8d60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57 << 16));
    // 0x1f8d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d68: 0xac531628  sw          $s3, 0x1628($v0)
    ctx->pc = 0x1f8d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 19)); ps2TraceGuestWrite(rdram, 0x391628u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x391628u, _value); } while (0);
    // 0x1f8d6c: 0xac74162c  sw          $s4, 0x162C($v1)
    ctx->pc = 0x1f8d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 20)); ps2TraceGuestWrite(rdram, 0x39162Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x39162Cu, _value); } while (0);
    // 0x1f8d70: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x1f8d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1f8d74: 0xc07b76e  jal         func_1EDDB8
    ctx->pc = 0x1F8D74u;
    SET_GPR_U32(ctx, 31, 0x1F8D7Cu);
    ctx->pc = 0x1F8D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D74u;
    // 0x1f8d78: 0xacd51630  sw          $s5, 0x1630($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 5680), GPR_U32(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EDDB8u, 0x1F8D74u, 0x1F8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D7Cu;
label_1f8d7c:
    // 0x1f8d7c: 0x3c090039  lui         $t1, 0x39
    ctx->pc = 0x1f8d7cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)57 << 16));
    // 0x1f8d80: 0x3c0b0020  lui         $t3, 0x20
    ctx->pc = 0x1f8d80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32 << 16));
    // 0x1f8d84: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1f8d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1f8d88: 0x26c41600  addiu       $a0, $s6, 0x1600
    ctx->pc = 0x1f8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5632));
    // 0x1f8d8c: 0x26271680  addiu       $a3, $s1, 0x1680
    ctx->pc = 0x1f8d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x1f8d90: 0x25292bc0  addiu       $t1, $t1, 0x2BC0
    ctx->pc = 0x1f8d90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11200));
    // 0x1f8d94: 0x256b8c28  addiu       $t3, $t3, -0x73D8
    ctx->pc = 0x1f8d94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294937640));
    // 0x1f8d98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f8d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8da0: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1f8da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f8da4: 0xc07b9de  jal         func_1EE778
    ctx->pc = 0x1F8DA4u;
    SET_GPR_U32(ctx, 31, 0x1F8DACu);
    ctx->pc = 0x1F8DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8DA4u;
    // 0x1f8da8: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE778u, 0x1F8DA4u, 0x1F8DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DACu;
label_1f8dac:
    // 0x1f8dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f8dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8db0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8DB0u;
    {
        const bool branch_taken_0x1f8db0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DB0u;
        // 0x1f8db4: 0x3c030022  lui         $v1, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8db0) {
            ctx->pc = 0x1F8DC4u;
            return;
        }
    }
    ctx->pc = 0x1F8DB8u;
    // 0x1f8db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8dbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8DBCu;
    {
        const bool branch_taken_0x1f8dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DBCu;
        // 0x1f8dc0: 0xac62d6b8  sw          $v0, -0x2948($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294956728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8dbc) {
            ctx->pc = 0x1F8DCCu;
            return;
        }
    }
    ctx->pc = 0x1F8DC4u;
}
