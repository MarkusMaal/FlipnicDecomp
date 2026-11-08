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

// Function: entry_0010e89c
// Address: 0x10e89c - 0x10ea34
void entry_0010e89c_0x10e89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e89c_0x10e89c");
#endif

    ctx->pc = 0x10e89cu;

label_10e89c:
    // 0x10e89c: 0x8e280220  lw          $t0, 0x220($s1)
    ctx->pc = 0x10e89cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e8a0: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x10e8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x10e8a4: 0x24a60040  addiu       $a2, $a1, 0x40
    ctx->pc = 0x10e8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x10e8a8: 0x8e270210  lw          $a3, 0x210($s1)
    ctx->pc = 0x10e8a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e8ac: 0x8f8585f4  lw          $a1, -0x7A0C($gp)
    ctx->pc = 0x10e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936052)));
    // 0x10e8b0: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x10e8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10e8b4: 0x244f0002  addiu       $t7, $v0, 0x2
    ctx->pc = 0x10e8b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x10e8b8: 0x244e0003  addiu       $t6, $v0, 0x3
    ctx->pc = 0x10e8b8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x10e8bc: 0x244d0004  addiu       $t5, $v0, 0x4
    ctx->pc = 0x10e8bcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x10e8c0: 0x244c0005  addiu       $t4, $v0, 0x5
    ctx->pc = 0x10e8c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x10e8c4: 0x244b0006  addiu       $t3, $v0, 0x6
    ctx->pc = 0x10e8c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x10e8c8: 0x244a0007  addiu       $t2, $v0, 0x7
    ctx->pc = 0x10e8c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x10e8cc: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x10e8ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x10e8d0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x10e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x10e8d4: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x10e8d4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x10e8d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x10e8dc: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x10e8dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x10e8e0: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e8e0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e8e4: 0x43382a  slt         $a3, $v0, $v1
    ctx->pc = 0x10e8e4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10e8e8: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e8ec: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e8f0: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e8f4: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e8f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10e8f8: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x10e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x10e8fc: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e8fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e900: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e900u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e904: 0x2494821  addu        $t1, $s2, $t1
    ctx->pc = 0x10e904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
    // 0x10e908: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e908u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10e90c: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e90cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e910: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e910u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e914: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e914u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e918: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e918u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e91c: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e91cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e920: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10e924: 0xacc80004  sw          $t0, 0x4($a2)
    ctx->pc = 0x10e924u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 8));
    // 0x10e928: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e928u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e92c: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e92cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e930: 0x1e94821  addu        $t1, $t7, $t1
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x10e934: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e934u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10e938: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e93c: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e940: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e944: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e948: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e94c: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10e950: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x10e950u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x10e954: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e954u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e958: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e958u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e95c: 0x1c94821  addu        $t1, $t6, $t1
    ctx->pc = 0x10e95cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 9)));
    // 0x10e960: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10e964: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e968: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e968u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e96c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e96cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e970: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e970u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e974: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e978: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e978u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10e97c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x10e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x10e980: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e984: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e988: 0x1a94821  addu        $t1, $t5, $t1
    ctx->pc = 0x10e988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x10e98c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e98cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10e990: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e994: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e994u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e998: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e998u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e99c: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e9a0: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e9a4: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e9a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10e9a8: 0xacc80010  sw          $t0, 0x10($a2)
    ctx->pc = 0x10e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 8));
    // 0x10e9ac: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e9acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e9b0: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e9b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e9b4: 0x1894821  addu        $t1, $t4, $t1
    ctx->pc = 0x10e9b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x10e9b8: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10e9bc: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e9bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e9c0: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e9c0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e9c4: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e9c4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e9c8: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e9c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e9cc: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e9ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e9d0: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e9d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10e9d4: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x10e9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
    // 0x10e9d8: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10e9d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10e9dc: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10e9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10e9e0: 0x1694821  addu        $t1, $t3, $t1
    ctx->pc = 0x10e9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x10e9e4: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10e9e8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10e9e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10e9ec: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10e9ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10e9f0: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10e9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10e9f4: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x10e9f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10e9f8: 0x8d082cd8  lw          $t0, 0x2CD8($t0)
    ctx->pc = 0x10e9f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 11480)));
    // 0x10e9fc: 0x8d0801d4  lw          $t0, 0x1D4($t0)
    ctx->pc = 0x10e9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 468)));
    // 0x10ea00: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x10ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x10ea04: 0x8e290220  lw          $t1, 0x220($s1)
    ctx->pc = 0x10ea04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 544)));
    // 0x10ea08: 0x8e280210  lw          $t0, 0x210($s1)
    ctx->pc = 0x10ea08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 528)));
    // 0x10ea0c: 0x1494821  addu        $t1, $t2, $t1
    ctx->pc = 0x10ea0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x10ea10: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x10ea14: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x10ea14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x10ea18: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x10ea18u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x10ea1c: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x10ea1cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x10ea20: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x10ea24: 0x8ca52cd8  lw          $a1, 0x2CD8($a1)
    ctx->pc = 0x10ea24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11480)));
    // 0x10ea28: 0x8ca501d4  lw          $a1, 0x1D4($a1)
    ctx->pc = 0x10ea28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 468)));
    // 0x10ea2c: 0x14e0ff9b  bnez        $a3, . + 4 + (-0x65 << 2)
    ctx->pc = 0x10EA2Cu;
    {
        const bool branch_taken_0x10ea2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA2Cu;
        // 0x10ea30: 0xacc5001c  sw          $a1, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea2c) {
            ctx->pc = 0x10E89Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e89c;
        }
    }
    ctx->pc = 0x10EA34u;
}
