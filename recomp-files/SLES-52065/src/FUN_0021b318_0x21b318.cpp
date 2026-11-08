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

// Function: FUN_0021b318
// Address: 0x21b318 - 0x21b41c
void FUN_0021b318_0x21b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b318_0x21b318");
#endif

    switch (ctx->pc) {
        case 0x21b360u: goto label_21b360;
        case 0x21b378u: goto label_21b378;
        case 0x21b398u: goto label_21b398;
        default: break;
    }

    ctx->pc = 0x21b318u;

    // 0x21b318: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21b31c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x21b31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21b320: 0x3c138007  lui         $s3, 0x8007
    ctx->pc = 0x21b320u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32775 << 16));
    // 0x21b324: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x21b324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x21b328: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x21b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x21b32c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x21b32cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21b334: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21b334u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b338: 0x8e626700  lw          $v0, 0x6700($s3)
    ctx->pc = 0x21b338u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80076700u));
    // 0x21b33c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21b33cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b340: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x21b340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x21b344: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x21b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21b348: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21b348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21b34c: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x21B34Cu;
    {
        const bool branch_taken_0x21b34c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B34Cu;
        // 0x21b350: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b34c) {
            ctx->pc = 0x21B3F0u;
            goto label_21b3f0;
        }
    }
    ctx->pc = 0x21B354u;
    // 0x21b354: 0x3c148007  lui         $s4, 0x8007
    ctx->pc = 0x21b354u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32775 << 16));
    // 0x21b358: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x21b358u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b35c: 0x0  nop
    ctx->pc = 0x21b35cu;
    // NOP
label_21b360:
    // 0x21b360: 0x26916740  addiu       $s1, $s4, 0x6740
    ctx->pc = 0x21b360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 26432));
    // 0x21b364: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x21b364u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b368: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x21b368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b36c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21b370: 0xc01d80e  jal         func_076038
    ctx->pc = 0x21B370u;
    SET_GPR_U32(ctx, 31, 0x21B378u);
    ctx->pc = 0x21B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B370u;
    // 0x21b374: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x21B370u, 0x21B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B378u;
label_21b378:
    // 0x21b378: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x21b378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b37c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x21B37Cu;
    {
        const bool branch_taken_0x21b37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B37Cu;
        // 0x21b380: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b37c) {
            ctx->pc = 0x21B3E0u;
            goto label_21b3e0;
        }
    }
    ctx->pc = 0x21B384u;
    // 0x21b384: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x21b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21b388: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x21b388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21b38c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21B38Cu;
    {
        const bool branch_taken_0x21b38c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B38Cu;
        // 0x21b390: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b38c) {
            ctx->pc = 0x21B3F0u;
            goto label_21b3f0;
        }
    }
    ctx->pc = 0x21B394u;
    // 0x21b394: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x21b394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_21b398:
    // 0x21b398: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x21b398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x21b39c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x21b39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x21b3a0: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x21b3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21b3a4: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x21b3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21b3a8: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x21b3a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21b3ac: 0xb065001b  sdl         $a1, 0x1B($v1)
    ctx->pc = 0x21b3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b3b0: 0xb4650014  sdr         $a1, 0x14($v1)
    ctx->pc = 0x21b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b3b4: 0xb0660023  sdl         $a2, 0x23($v1)
    ctx->pc = 0x21b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b3b8: 0xb466001c  sdr         $a2, 0x1C($v1)
    ctx->pc = 0x21b3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b3bc: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x21b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
    // 0x21b3c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b3c4: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x21b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x21b3c8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x21b3c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x21b3cc: 0x0  nop
    ctx->pc = 0x21b3ccu;
    // NOP
    // 0x21b3d0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x21B3D0u;
    {
        const bool branch_taken_0x21b3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b3d0) {
            ctx->pc = 0x21B398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b398;
        }
    }
    ctx->pc = 0x21B3D8u;
    // 0x21b3d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21B3D8u;
    {
        const bool branch_taken_0x21b3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3D8u;
        // 0x21b3dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3d8) {
            ctx->pc = 0x21B3F4u;
            goto label_21b3f4;
        }
    }
    ctx->pc = 0x21B3E0u;
label_21b3e0:
    // 0x21b3e0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21b3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x21b3e4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x21b3e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b3e8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x21B3E8u;
    {
        const bool branch_taken_0x21b3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B3E8u;
        // 0x21b3ec: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b3e8) {
            ctx->pc = 0x21B360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b360;
        }
    }
    ctx->pc = 0x21B3F0u;
label_21b3f0:
    // 0x21b3f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x21b3f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b3f4:
    // 0x21b3f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21b3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21b3f8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x21b3f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21b3fc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x21b3fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21b400: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x21b400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21b404: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x21b404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21b408: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21b408u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b40c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21b40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b410: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b410u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b414: 0x3e00008  jr          $ra
    ctx->pc = 0x21B414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B414u;
        // 0x21b418: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B41Cu;
}
