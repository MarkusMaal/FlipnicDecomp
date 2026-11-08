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

// Function: FUN_001d3e00
// Address: 0x1d3e00 - 0x1d3f04
void FUN_001d3e00_0x1d3e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d3e00_0x1d3e00");
#endif

    ctx->pc = 0x1d3e00u;

    // 0x1d3e00: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1d3e00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e04: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x1d3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1d3e08: 0x25630010  addiu       $v1, $t3, 0x10
    ctx->pc = 0x1d3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x1d3e0c: 0x2564000c  addiu       $a0, $t3, 0xC
    ctx->pc = 0x1d3e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 12));
    // 0x1d3e10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d3e10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d3e14: 0x445021  addu        $t2, $v0, $a0
    ctx->pc = 0x1d3e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3e18: 0xc34821  addu        $t1, $a2, $v1
    ctx->pc = 0x1d3e18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d3e1c: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1d3e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1d3e20: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x1d3e20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3e24: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x1d3e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e28: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x1d3e28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e2c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3e2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3e34: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D3E34u;
    {
        const bool branch_taken_0x1d3e34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3e34) {
            ctx->pc = 0x1D3E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3E34u;
            // 0x1d3e38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3E3Cu;
            goto label_1d3e3c;
        }
    }
    ctx->pc = 0x1D3E3Cu;
label_1d3e3c:
    // 0x1d3e3c: 0x8c480240  lw          $t0, 0x240($v0)
    ctx->pc = 0x1d3e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
    // 0x1d3e40: 0x246c0478  addiu       $t4, $v1, 0x478
    ctx->pc = 0x1d3e40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1144));
    // 0x1d3e44: 0x8cc40030  lw          $a0, 0x30($a2)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1d3e48: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d3e4c: 0x8d460244  lw          $a2, 0x244($t2)
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 580)));
    // 0x1d3e50: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1d3e50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e54: 0x8d220050  lw          $v0, 0x50($t1)
    ctx->pc = 0x1d3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 80)));
    // 0x1d3e58: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x1d3e58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e5c: 0x882018  mult        $a0, $a0, $t0
    ctx->pc = 0x1d3e5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d3e60: 0x24083fff  addiu       $t0, $zero, 0x3FFF
    ctx->pc = 0x1d3e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1d3e64: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1d3e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1d3e68: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x1d3e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3e6c: 0x87001a  div         $zero, $a0, $a3
    ctx->pc = 0x1d3e6cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1d3e70: 0x7047001a  div1        $zero, $v0, $a3
    ctx->pc = 0x1d3e70u;
    { int32_t divisor = GPR_S32(ctx, 7); int32_t dividend = GPR_S32(ctx, 2); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x1d3e74: 0x2012  mflo        $a0
    ctx->pc = 0x1d3e74u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1d3e78: 0x70001012  mflo1       $v0
    ctx->pc = 0x1d3e78u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
    // 0x1d3e7c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d3e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e80: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d3e80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3e84: 0x28a34000  slti        $v1, $a1, 0x4000
    ctx->pc = 0x1d3e84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1d3e88: 0x28e24000  slti        $v0, $a3, 0x4000
    ctx->pc = 0x1d3e88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x1d3e8c: 0x103280a  movz        $a1, $t0, $v1
    ctx->pc = 0x1d3e8cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x1d3e90: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D3E90u;
    {
        const bool branch_taken_0x1d3e90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E90u;
        // 0x1d3e94: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e90) {
            ctx->pc = 0x1D3EA8u;
            goto label_1d3ea8;
        }
    }
    ctx->pc = 0x1D3E98u;
    // 0x1d3e98: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x1d3e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d3e9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3ea0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D3EA0u;
    {
        const bool branch_taken_0x1d3ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EA0u;
        // 0x1d3ea4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ea0) {
            ctx->pc = 0x1D3EF0u;
            goto label_1d3ef0;
        }
    }
    ctx->pc = 0x1D3EA8u;
label_1d3ea8:
    // 0x1d3ea8: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x1d3ea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d3eac: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3EACu;
    {
        const bool branch_taken_0x1d3eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3eac) {
            ctx->pc = 0x1D3EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3EACu;
            // 0x1d3eb0: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3EB8u;
            goto label_1d3eb8;
        }
    }
    ctx->pc = 0x1D3EB4u;
    // 0x1d3eb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1d3eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d3eb8:
    // 0x1d3eb8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x1d3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1d3ebc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1d3ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1d3ec0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D3EC0u;
    {
        const bool branch_taken_0x1d3ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3EC0u;
        // 0x1d3ec4: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ec0) {
            ctx->pc = 0x1D3EECu;
            goto label_1d3eec;
        }
    }
    ctx->pc = 0x1D3EC8u;
    // 0x1d3ec8: 0x8d63002c  lw          $v1, 0x2C($t3)
    ctx->pc = 0x1d3ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 44)));
    // 0x1d3ecc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3ECCu;
    {
        const bool branch_taken_0x1d3ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ECCu;
        // 0x1d3ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3ecc) {
            ctx->pc = 0x1D3EF0u;
            goto label_1d3ef0;
        }
    }
    ctx->pc = 0x1D3ED4u;
    // 0x1d3ed4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1d3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1d3ed8: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x1d3ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x1d3edc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1d3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d3ee0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x1d3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3ee4: 0x22843  sra         $a1, $v0, 1
    ctx->pc = 0x1d3ee4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1d3ee8: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x1d3ee8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_1d3eec:
    // 0x1d3eec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1d3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d3ef0:
    // 0x1d3ef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3ef4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1d3ef4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3ef8: 0x1442014  dsllv       $a0, $a0, $t2
    ctx->pc = 0x1d3ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 10) & 0x3F));
    // 0x1d3efc: 0x8078286  j           func_1E0A18
    ctx->pc = 0x1D3EFCu;
    ctx->pc = 0x1D3F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3EFCu;
    // 0x1d3f00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0A18u;
    FUN_001e0a18_0x1e0a18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3F04u;
}
