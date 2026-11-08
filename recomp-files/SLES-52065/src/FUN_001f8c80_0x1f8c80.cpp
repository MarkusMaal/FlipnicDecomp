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

// Function: FUN_001f8c80
// Address: 0x1f8c80 - 0x1f8dfc
void FUN_001f8c80_0x1f8c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f8c80_0x1f8c80");
#endif

    switch (ctx->pc) {
        case 0x1f8ce0u: goto label_1f8ce0;
        case 0x1f8d7cu: goto label_1f8d7c;
        case 0x1f8dacu: goto label_1f8dac;
        case 0x1f8dccu: goto label_1f8dcc;
        default: break;
    }

    ctx->pc = 0x1f8c80u;

    // 0x1f8c80: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f8c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f8c84: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f8c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f8c88: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f8c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f8c8c: 0x3c160039  lui         $s6, 0x39
    ctx->pc = 0x1f8c8cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)57 << 16));
    // 0x1f8c90: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f8c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f8c94: 0x26c21600  addiu       $v0, $s6, 0x1600
    ctx->pc = 0x1f8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 5632));
    // 0x1f8c98: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f8c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f8c9c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1f8c9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ca0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f8ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f8ca4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1f8ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ca8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f8cac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f8cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cb0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1f8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1f8cb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f8cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cb8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f8cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f8cbc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f8cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f8cc0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1f8cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x391624u));
    // 0x1f8cc4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8CC4u;
    {
        const bool branch_taken_0x1f8cc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CC4u;
        // 0x1f8cc8: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cc4) {
            ctx->pc = 0x1F8CD4u;
            goto label_1f8cd4;
        }
    }
    ctx->pc = 0x1F8CCCu;
    // 0x1f8ccc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1F8CCCu;
    {
        const bool branch_taken_0x1f8ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CCCu;
        // 0x1f8cd0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ccc) {
            ctx->pc = 0x1F8DD0u;
            goto label_1f8dd0;
        }
    }
    ctx->pc = 0x1F8CD4u;
label_1f8cd4:
    // 0x1f8cd4: 0x3c170022  lui         $s7, 0x22
    ctx->pc = 0x1f8cd4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)34 << 16));
    // 0x1f8cd8: 0xc07ad9c  jal         func_1EB670
    ctx->pc = 0x1F8CD8u;
    SET_GPR_U32(ctx, 31, 0x1F8CE0u);
    ctx->pc = 0x1F8CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8CD8u;
    // 0x1f8cdc: 0x8ee4d6bc  lw          $a0, -0x2944($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB670u, 0x1F8CD8u, 0x1F8CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8CE0u;
label_1f8ce0:
    // 0x1f8ce0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8CE0u;
    {
        const bool branch_taken_0x1f8ce0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F8CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CE0u;
        // 0x1f8ce4: 0x3c110039  lui         $s1, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ce0) {
            ctx->pc = 0x1F8CF0u;
            goto label_1f8cf0;
        }
    }
    ctx->pc = 0x1F8CE8u;
    // 0x1f8ce8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1F8CE8u;
    {
        const bool branch_taken_0x1f8ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CE8u;
        // 0x1f8cec: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8ce8) {
            ctx->pc = 0x1F8DD0u;
            goto label_1f8dd0;
        }
    }
    ctx->pc = 0x1F8CF0u;
label_1f8cf0:
    // 0x1f8cf0: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x1f8cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x1f8cf4: 0x26231680  addiu       $v1, $s1, 0x1680
    ctx->pc = 0x1f8cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x1f8cf8: 0x24821b00  addiu       $v0, $a0, 0x1B00
    ctx->pc = 0x1f8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6912));
    // 0x1f8cfc: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x1f8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x1f8d00: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x1f8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x1f8d04: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D04u;
    {
        const bool branch_taken_0x1f8d04 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D04u;
        // 0x1f8d08: 0xac62001c  sw          $v0, 0x1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d04) {
            ctx->pc = 0x1F8D18u;
            goto label_1f8d18;
        }
    }
    ctx->pc = 0x1F8D0Cu;
    // 0x1f8d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F8D10u;
    {
        const bool branch_taken_0x1f8d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D10u;
        // 0x1f8d14: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d10) {
            ctx->pc = 0x1F8D1Cu;
            goto label_1f8d1c;
        }
    }
    ctx->pc = 0x1F8D18u;
label_1f8d18:
    // 0x1f8d18: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x1f8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_1f8d1c:
    // 0x1f8d1c: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D1Cu;
    {
        const bool branch_taken_0x1f8d1c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D1Cu;
        // 0x1f8d20: 0x26231680  addiu       $v1, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d1c) {
            ctx->pc = 0x1F8D30u;
            goto label_1f8d30;
        }
    }
    ctx->pc = 0x1F8D24u;
    // 0x1f8d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8D28u;
    {
        const bool branch_taken_0x1f8d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D28u;
        // 0x1f8d2c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d28) {
            ctx->pc = 0x1F8D38u;
            goto label_1f8d38;
        }
    }
    ctx->pc = 0x1F8D30u;
label_1f8d30:
    // 0x1f8d30: 0x26221680  addiu       $v0, $s1, 0x1680
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x1f8d34: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1f8d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1f8d38:
    // 0x1f8d38: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8D38u;
    {
        const bool branch_taken_0x1f8d38 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D38u;
        // 0x1f8d3c: 0x26231680  addiu       $v1, $s1, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d38) {
            ctx->pc = 0x1F8D4Cu;
            goto label_1f8d4c;
        }
    }
    ctx->pc = 0x1F8D40u;
    // 0x1f8d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8D44u;
    {
        const bool branch_taken_0x1f8d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D44u;
        // 0x1f8d48: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d44) {
            ctx->pc = 0x1F8D54u;
            goto label_1f8d54;
        }
    }
    ctx->pc = 0x1F8D4Cu;
label_1f8d4c:
    // 0x1f8d4c: 0x26221680  addiu       $v0, $s1, 0x1680
    ctx->pc = 0x1f8d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5760));
    // 0x1f8d50: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1f8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1f8d54:
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
            goto label_1f8dc4;
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
            goto label_1f8dcc;
        }
    }
    ctx->pc = 0x1F8DC4u;
label_1f8dc4:
    // 0x1f8dc4: 0xc07ad90  jal         func_1EB640
    ctx->pc = 0x1F8DC4u;
    SET_GPR_U32(ctx, 31, 0x1F8DCCu);
    ctx->pc = 0x1F8DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8DC4u;
    // 0x1f8dc8: 0x8ee4d6bc  lw          $a0, -0x2944($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294956732)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB640u, 0x1F8DC4u, 0x1F8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8DCCu;
label_1f8dcc:
    // 0x1f8dcc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f8dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f8dd0:
    // 0x1f8dd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1f8dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f8dd4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f8dd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8dd8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f8dd8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f8ddc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f8ddcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f8de0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f8de0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f8de4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f8de4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f8de8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f8de8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f8dec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f8decu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8df0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f8df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8df4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DF4u;
        // 0x1f8df8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8DFCu;
}
