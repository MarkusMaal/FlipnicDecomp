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

// Function: FUN_0021b560
// Address: 0x21b560 - 0x21b700
void FUN_0021b560_0x21b560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021b560_0x21b560");
#endif

    switch (ctx->pc) {
        case 0x21b598u: goto label_21b598;
        case 0x21b610u: goto label_21b610;
        case 0x21b6a0u: goto label_21b6a0;
        case 0x21b6ccu: goto label_21b6cc;
        default: break;
    }

    ctx->pc = 0x21b560u;

    // 0x21b560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21b560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21b564: 0x3c0c8007  lui         $t4, 0x8007
    ctx->pc = 0x21b564u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32775 << 16));
    // 0x21b568: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x21b568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21b56c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x21b56cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b570: 0x8d826700  lw          $v0, 0x6700($t4)
    ctx->pc = 0x21b570u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x80076700u));
    // 0x21b574: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x21b574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b578: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21b578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21b57c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x21b57cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21b580: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x21B580u;
    {
        const bool branch_taken_0x21b580 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B580u;
        // 0x21b584: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b580) {
            ctx->pc = 0x21B6E4u;
            goto label_21b6e4;
        }
    }
    ctx->pc = 0x21B588u;
    // 0x21b588: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x21B588u;
    {
        const bool branch_taken_0x21b588 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x21B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B588u;
        // 0x21b58c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b588) {
            ctx->pc = 0x21B6E4u;
            goto label_21b6e4;
        }
    }
    ctx->pc = 0x21B590u;
    // 0x21b590: 0x3c0b8007  lui         $t3, 0x8007
    ctx->pc = 0x21b590u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32775 << 16));
    // 0x21b594: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_21b598:
    // 0x21b598: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x21b598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x21b59c: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x21b59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21b5a0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x21b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21b5a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x21b5a8: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x21B5A8u;
    {
        const bool branch_taken_0x21b5a8 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x21B5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5A8u;
        // 0x21b5ac: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5a8) {
            ctx->pc = 0x21B6D4u;
            goto label_21b6d4;
        }
    }
    ctx->pc = 0x21B5B0u;
    // 0x21b5b0: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x21b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
    // 0x21b5b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b5b8: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x21b5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
    // 0x21b5bc: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x21b5bcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b5c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0xB0001820u));
    // 0x21b5c4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B5C4u;
    {
        const bool branch_taken_0x21b5c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21B5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5C4u;
        // 0x21b5c8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5c4) {
            ctx->pc = 0x21B5E8u;
            goto label_21b5e8;
        }
    }
    ctx->pc = 0x21B5CCu;
    // 0x21b5cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21b5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x21b5d0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x21b5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x21b5d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21b5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000F000u));
    // 0x21b5d8: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x21b5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x21b5dc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x21B5DCu;
    {
        const bool branch_taken_0x21b5dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B5DCu;
        // 0x21b5e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b5dc) {
            ctx->pc = 0x21B6ECu;
            goto label_21b6ec;
        }
    }
    ctx->pc = 0x21B5E4u;
    // 0x21b5e4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x21b5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_21b5e8:
    // 0x21b5e8: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x21b5e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x21b5ec: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x21b5ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21b5f0: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x21b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x21b5f4: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x21b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21b5f8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x21b5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b5fc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21b5fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b600: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x21b600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21b604: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x21B604u;
    {
        const bool branch_taken_0x21b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B604u;
        // 0x21b608: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b604) {
            ctx->pc = 0x21B66Cu;
            goto label_21b66c;
        }
    }
    ctx->pc = 0x21B60Cu;
    // 0x21b60c: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x21b60cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_21b610:
    // 0x21b610: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x21b610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x21b614: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x21b614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x21b618: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x21b618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21b61c: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x21b61cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x21b620: 0x25666740  addiu       $a2, $t3, 0x6740
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
    // 0x21b624: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x21b624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b628: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x21b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x21b62c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x21b62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x21b630: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x21b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x21b634: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x21b634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x21b638: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x21b638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x21b63c: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x21b63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x21b640: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x21b640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x21b644: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x21b644u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21b648: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x21b648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b64c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x21b64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b650: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x21b650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b654: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x21b654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x21b658: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x21b658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b65c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x21B65Cu;
    {
        const bool branch_taken_0x21b65c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B65Cu;
        // 0x21b660: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b65c) {
            ctx->pc = 0x21B610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b610;
        }
    }
    ctx->pc = 0x21B664u;
    // 0x21b664: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21B664u;
    {
        const bool branch_taken_0x21b664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B664u;
        // 0x21b668: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b664) {
            ctx->pc = 0x21B674u;
            goto label_21b674;
        }
    }
    ctx->pc = 0x21B66Cu;
label_21b66c:
    // 0x21b66c: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x21b66cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
    // 0x21b670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21b674:
    // 0x21b674: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x21b674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
    // 0x21b678: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x21b678u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
    // 0x21b67c: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x21b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x21b680: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x21b680u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x21b684: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x21b684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21b688: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x21b688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21b68c: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x21b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
    // 0x21b690: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21B690u;
    {
        const bool branch_taken_0x21b690 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B690u;
        // 0x21b694: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b690) {
            ctx->pc = 0x21B6A0u;
            goto label_21b6a0;
        }
    }
    ctx->pc = 0x21B698u;
    // 0x21b698: 0xc01d918  jal         func_076460
    ctx->pc = 0x21B698u;
    SET_GPR_U32(ctx, 31, 0x21B6A0u);
    ctx->pc = 0x21B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B698u;
    // 0x21b69c: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76460u, 0x21B698u, 0x21B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6A0u;
label_21b6a0:
    // 0x21b6a0: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x21b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
    // 0x21b6a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21B6A4u;
    {
        const bool branch_taken_0x21b6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A4u;
        // 0x21b6a8: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6a4) {
            ctx->pc = 0x21B6B8u;
            goto label_21b6b8;
        }
    }
    ctx->pc = 0x21B6ACu;
    // 0x21b6ac: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x21b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x21b6b0: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x21b6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
    // 0x21b6b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x21b6b4u;
    runtime->Store32(rdram, ctx, 0xB0001810u, GPR_U32(ctx, 3));
label_21b6b8:
    // 0x21b6b8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x21b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
    // 0x21b6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21b6c0: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x21b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x21b6c4: 0xc01d80e  jal         func_076038
    ctx->pc = 0x21B6C4u;
    SET_GPR_U32(ctx, 31, 0x21B6CCu);
    ctx->pc = 0x21B6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6C4u;
    // 0x21b6c8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x76038u, 0x21B6C4u, 0x21B6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6CCu;
label_21b6cc:
    // 0x21b6cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21B6CCu;
    {
        const bool branch_taken_0x21b6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6CCu;
        // 0x21b6d0: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6cc) {
            ctx->pc = 0x21B6E4u;
            goto label_21b6e4;
        }
    }
    ctx->pc = 0x21B6D4u;
label_21b6d4:
    // 0x21b6d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21b6d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21b6d8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21b6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x21b6dc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x21B6DCu;
    {
        const bool branch_taken_0x21b6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6DCu;
        // 0x21b6e0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6dc) {
            ctx->pc = 0x21B598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b598;
        }
    }
    ctx->pc = 0x21B6E4u;
label_21b6e4:
    // 0x21b6e4: 0xf  sync
    ctx->pc = 0x21b6e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x21b6e8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x21b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21b6ec:
    // 0x21b6ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21b6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21b6f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21b6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21b6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21b6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F8u;
        // 0x21b6fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B700u;
}
