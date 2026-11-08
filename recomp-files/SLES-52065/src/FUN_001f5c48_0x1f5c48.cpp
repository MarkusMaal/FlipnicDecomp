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

// Function: FUN_001f5c48
// Address: 0x1f5c48 - 0x1f5e2c
void FUN_001f5c48_0x1f5c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f5c48_0x1f5c48");
#endif

    switch (ctx->pc) {
        case 0x1f5ca4u: goto label_1f5ca4;
        case 0x1f5cfcu: goto label_1f5cfc;
        case 0x1f5d18u: goto label_1f5d18;
        case 0x1f5d3cu: goto label_1f5d3c;
        case 0x1f5d8cu: goto label_1f5d8c;
        default: break;
    }

    ctx->pc = 0x1f5c48u;

    // 0x1f5c48: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f5c4c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f5c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1f5c50: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f5c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1f5c54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f5c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c58: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f5c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1f5c5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f5c5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c60: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f5c64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1f5c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c68: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x1f5c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x1f5c6c: 0x3282003f  andi        $v0, $s4, 0x3F
    ctx->pc = 0x1f5c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)63);
    // 0x1f5c70: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x1f5c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x1f5c74: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1f5c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1f5c78: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f5c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1f5c7c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f5c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1f5c80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F5C80u;
    {
        const bool branch_taken_0x1f5c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C80u;
        // 0x1f5c84: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c80) {
            ctx->pc = 0x1F5CACu;
            goto label_1f5cac;
        }
    }
    ctx->pc = 0x1F5C88u;
    // 0x1f5c88: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f5c8c: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f5c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BAB4u));
    // 0x1f5c90: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1F5C90u;
    {
        const bool branch_taken_0x1f5c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C90u;
        // 0x1f5c94: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c90) {
            ctx->pc = 0x1F5D94u;
            goto label_1f5d94;
        }
    }
    ctx->pc = 0x1F5C98u;
    // 0x1f5c98: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f5c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c9c: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5C9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5CA4u);
    ctx->pc = 0x1F5CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C9Cu;
    // 0x1f5ca0: 0x248445a0  addiu       $a0, $a0, 0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5C9Cu, 0x1F5CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CA4u;
label_1f5ca4:
    // 0x1f5ca4: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1F5CA4u;
    {
        const bool branch_taken_0x1f5ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CA4u;
        // 0x1f5ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ca4) {
            ctx->pc = 0x1F5DFCu;
            goto label_1f5dfc;
        }
    }
    ctx->pc = 0x1F5CACu;
label_1f5cac:
    // 0x1f5cac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f5cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f5cb0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x1f5cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5cb4: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1f5cb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5cb8: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x1f5cb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f5cbc: 0x3c1e0039  lui         $fp, 0x39
    ctx->pc = 0x1f5cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)57 << 16));
    // 0x1f5cc0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f5cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5cc4: 0x27c210d0  addiu       $v0, $fp, 0x10D0
    ctx->pc = 0x1f5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4304));
    // 0x1f5cc8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f5cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5ccc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f5cd0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f5cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f5cd4: 0x1465000b  bne         $v1, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F5CD4u;
    {
        const bool branch_taken_0x1f5cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F5CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CD4u;
        // 0x1f5cd8: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cd4) {
            ctx->pc = 0x1F5D04u;
            goto label_1f5d04;
        }
    }
    ctx->pc = 0x1F5CDCu;
    // 0x1f5cdc: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1f5cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1f5ce0: 0x8c43bab4  lw          $v1, -0x454C($v0)
    ctx->pc = 0x1f5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x21BAB4u));
    // 0x1f5ce4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F5CE4u;
    {
        const bool branch_taken_0x1f5ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CE4u;
        // 0x1f5ce8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5ce4) {
            ctx->pc = 0x1F5D94u;
            goto label_1f5d94;
        }
    }
    ctx->pc = 0x1F5CECu;
    // 0x1f5cec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f5cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5cf0: 0x248445d0  addiu       $a0, $a0, 0x45D0
    ctx->pc = 0x1f5cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17872));
    // 0x1f5cf4: 0xc0400e8  jal         func_1003A0
    ctx->pc = 0x1F5CF4u;
    SET_GPR_U32(ctx, 31, 0x1F5CFCu);
    ctx->pc = 0x1F5CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CF4u;
    // 0x1f5cf8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003A0u, 0x1F5CF4u, 0x1F5CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5CFCu;
label_1f5cfc:
    // 0x1f5cfc: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1F5CFCu;
    {
        const bool branch_taken_0x1f5cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CFCu;
        // 0x1f5d00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5cfc) {
            ctx->pc = 0x1F5DFCu;
            goto label_1f5dfc;
        }
    }
    ctx->pc = 0x1F5D04u;
label_1f5d04:
    // 0x1f5d04: 0x3c170039  lui         $s7, 0x39
    ctx->pc = 0x1f5d04u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)57 << 16));
    // 0x1f5d08: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1f5d08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f5d0c: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x1f5d0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f5d10: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1f5d10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5d14: 0x0  nop
    ctx->pc = 0x1f5d14u;
    // NOP
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
            goto label_1f5d9c;
        }
    }
    ctx->pc = 0x1F5D94u;
label_1f5d94:
    // 0x1f5d94: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F5D94u;
    {
        const bool branch_taken_0x1f5d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5D94u;
        // 0x1f5d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5d94) {
            ctx->pc = 0x1F5DFCu;
            goto label_1f5dfc;
        }
    }
    ctx->pc = 0x1F5D9Cu;
label_1f5d9c:
    // 0x1f5d9c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x1f5d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1f5da0: 0x72673818  mult1       $a3, $s3, $a3
    ctx->pc = 0x1f5da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1f5da4: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x1f5da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f5da8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f5dac: 0x122940  sll         $a1, $s2, 5
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x1f5db0: 0x244211c0  addiu       $v0, $v0, 0x11C0
    ctx->pc = 0x1f5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x1f5db4: 0x27c410d0  addiu       $a0, $fp, 0x10D0
    ctx->pc = 0x1f5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4304));
    // 0x1f5db8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f5dbc: 0x1331c0  sll         $a2, $s3, 7
    ctx->pc = 0x1f5dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 7));
    // 0x1f5dc0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1f5dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1f5dc4: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1f5dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f5dc8: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f5dcc: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1f5dd0: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1f5dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1f5dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5dd8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5ddc: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f5ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1f5de0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1f5de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5de4: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x1f5de4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x1f5de8: 0xace80008  sw          $t0, 0x8($a3)
    ctx->pc = 0x1f5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 8));
    // 0x1f5dec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f5decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5df0: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x1f5df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x1f5df4: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x1f5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x1f5df8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f5dfc:
    // 0x1f5dfc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f5dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f5e00: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1f5e00u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f5e04: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1f5e04u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f5e08: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1f5e08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f5e0c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1f5e0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f5e10: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1f5e10u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5e14: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1f5e14u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5e18: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1f5e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f5e1c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1f5e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f5e20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f5e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5e24: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5E24u;
        // 0x1f5e28: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5E2Cu;
}
